#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw_Cold__14CWeaponElementFv
// Address: 0x1c6660 - 0x1c6878
void Draw_Cold__14CWeaponElementFv_0x1c6660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw_Cold__14CWeaponElementFv_0x1c6660");
#endif

    switch (ctx->pc) {
        case 0x1c66a0u: goto label_1c66a0;
        case 0x1c66b0u: goto label_1c66b0;
        case 0x1c66c0u: goto label_1c66c0;
        case 0x1c66d0u: goto label_1c66d0;
        case 0x1c66d8u: goto label_1c66d8;
        case 0x1c66e4u: goto label_1c66e4;
        case 0x1c66f0u: goto label_1c66f0;
        case 0x1c66fcu: goto label_1c66fc;
        case 0x1c6708u: goto label_1c6708;
        case 0x1c6714u: goto label_1c6714;
        case 0x1c6720u: goto label_1c6720;
        case 0x1c672cu: goto label_1c672c;
        case 0x1c6738u: goto label_1c6738;
        case 0x1c6748u: goto label_1c6748;
        case 0x1c67d0u: goto label_1c67d0;
        case 0x1c67e0u: goto label_1c67e0;
        case 0x1c67f8u: goto label_1c67f8;
        case 0x1c6808u: goto label_1c6808;
        case 0x1c6814u: goto label_1c6814;
        case 0x1c6824u: goto label_1c6824;
        case 0x1c6830u: goto label_1c6830;
        case 0x1c6850u: goto label_1c6850;
        default: break;
    }

    ctx->pc = 0x1c6660u;

    // 0x1c6660: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1c6660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1c6664: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1c6664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1c6668: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c6668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c666c: 0x24a56c60  addiu       $a1, $a1, 0x6C60
    ctx->pc = 0x1c666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27744));
    // 0x1c6670: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c6670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c6674: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6678: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c6678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c667c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c6680: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c6680u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6684: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c6684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c6688: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c6688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c668c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c668cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c6690: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1c6690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1c6694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c6694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c6698: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1C6698u;
    SET_GPR_U32(ctx, 31, 0x1C66A0u);
    ctx->pc = 0x1C669Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6698u;
            // 0x1c669c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66A0u; }
        if (ctx->pc != 0x1C66A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66A0u; }
        if (ctx->pc != 0x1C66A0u) { return; }
    }
    ctx->pc = 0x1C66A0u;
label_1c66a0:
    // 0x1c66a0: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1c66a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1c66a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c66a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66a8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C66A8u;
    SET_GPR_U32(ctx, 31, 0x1C66B0u);
    ctx->pc = 0x1C66ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66A8u;
            // 0x1c66ac: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66B0u; }
        if (ctx->pc != 0x1C66B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66B0u; }
        if (ctx->pc != 0x1C66B0u) { return; }
    }
    ctx->pc = 0x1C66B0u;
label_1c66b0:
    // 0x1c66b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c66b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c66b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c66b8: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1C66B8u;
    SET_GPR_U32(ctx, 31, 0x1C66C0u);
    ctx->pc = 0x1C66BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66B8u;
            // 0x1c66bc: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66C0u; }
        if (ctx->pc != 0x1C66C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66C0u; }
        if (ctx->pc != 0x1C66C0u) { return; }
    }
    ctx->pc = 0x1C66C0u;
label_1c66c0:
    // 0x1c66c0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c66c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c66c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c66c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66c8: 0xc04d104  jal         func_134410
    ctx->pc = 0x1C66C8u;
    SET_GPR_U32(ctx, 31, 0x1C66D0u);
    ctx->pc = 0x1C66CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66C8u;
            // 0x1c66cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66D0u; }
        if (ctx->pc != 0x1C66D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66D0u; }
        if (ctx->pc != 0x1C66D0u) { return; }
    }
    ctx->pc = 0x1C66D0u;
label_1c66d0:
    // 0x1c66d0: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1C66D0u;
    SET_GPR_U32(ctx, 31, 0x1C66D8u);
    ctx->pc = 0x1C66D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66D0u;
            // 0x1c66d4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66D8u; }
        if (ctx->pc != 0x1C66D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66D8u; }
        if (ctx->pc != 0x1C66D8u) { return; }
    }
    ctx->pc = 0x1C66D8u;
label_1c66d8:
    // 0x1c66d8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c66dc: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1C66DCu;
    SET_GPR_U32(ctx, 31, 0x1C66E4u);
    ctx->pc = 0x1C66E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66DCu;
            // 0x1c66e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66E4u; }
        if (ctx->pc != 0x1C66E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66E4u; }
        if (ctx->pc != 0x1C66E4u) { return; }
    }
    ctx->pc = 0x1C66E4u;
label_1c66e4:
    // 0x1c66e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c66e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c66e8: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1C66E8u;
    SET_GPR_U32(ctx, 31, 0x1C66F0u);
    ctx->pc = 0x1C66ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66E8u;
            // 0x1c66ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66F0u; }
        if (ctx->pc != 0x1C66F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66F0u; }
        if (ctx->pc != 0x1C66F0u) { return; }
    }
    ctx->pc = 0x1C66F0u;
label_1c66f0:
    // 0x1c66f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c66f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c66f4: 0xc04d424  jal         func_135090
    ctx->pc = 0x1C66F4u;
    SET_GPR_U32(ctx, 31, 0x1C66FCu);
    ctx->pc = 0x1C66F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66F4u;
            // 0x1c66f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66FCu; }
        if (ctx->pc != 0x1C66FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66FCu; }
        if (ctx->pc != 0x1C66FCu) { return; }
    }
    ctx->pc = 0x1C66FCu;
label_1c66fc:
    // 0x1c66fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c66fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c6700: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1C6700u;
    SET_GPR_U32(ctx, 31, 0x1C6708u);
    ctx->pc = 0x1C6704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6700u;
            // 0x1c6704: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6708u; }
        if (ctx->pc != 0x1C6708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6708u; }
        if (ctx->pc != 0x1C6708u) { return; }
    }
    ctx->pc = 0x1C6708u;
label_1c6708:
    // 0x1c6708: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c6708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c670c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x1C670Cu;
    SET_GPR_U32(ctx, 31, 0x1C6714u);
    ctx->pc = 0x1C6710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C670Cu;
            // 0x1c6710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6714u; }
        if (ctx->pc != 0x1C6714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6714u; }
        if (ctx->pc != 0x1C6714u) { return; }
    }
    ctx->pc = 0x1C6714u;
label_1c6714:
    // 0x1c6714: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c6714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c6718: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1C6718u;
    SET_GPR_U32(ctx, 31, 0x1C6720u);
    ctx->pc = 0x1C671Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6718u;
            // 0x1c671c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6720u; }
        if (ctx->pc != 0x1C6720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6720u; }
        if (ctx->pc != 0x1C6720u) { return; }
    }
    ctx->pc = 0x1C6720u;
label_1c6720:
    // 0x1c6720: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c6720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c6724: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1C6724u;
    SET_GPR_U32(ctx, 31, 0x1C672Cu);
    ctx->pc = 0x1C6728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6724u;
            // 0x1c6728: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C672Cu; }
        if (ctx->pc != 0x1C672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C672Cu; }
        if (ctx->pc != 0x1C672Cu) { return; }
    }
    ctx->pc = 0x1C672Cu;
label_1c672c:
    // 0x1c672c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6730: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1C6730u;
    SET_GPR_U32(ctx, 31, 0x1C6738u);
    ctx->pc = 0x1C6734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6730u;
            // 0x1c6734: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6738u; }
        if (ctx->pc != 0x1C6738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6738u; }
        if (ctx->pc != 0x1C6738u) { return; }
    }
    ctx->pc = 0x1C6738u;
label_1c6738:
    // 0x1c6738: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c6738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c673c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c673cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6740: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c6740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6744: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c6744u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6748:
    // 0x1c6748: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x1c6748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1c674c: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x1c674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1c6750: 0xc4610520  lwc1        $f1, 0x520($v1)
    ctx->pc = 0x1c6750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6754: 0x845106fa  lh          $s1, 0x6FA($v0)
    ctx->pc = 0x1c6754u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1786)));
    // 0x1c6758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c675c: 0x0  nop
    ctx->pc = 0x1c675cu;
    // NOP
    // 0x1c6760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6764: 0x0  nop
    ctx->pc = 0x1c6764u;
    // NOP
    // 0x1c6768: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x1C6768u;
    {
        const bool branch_taken_0x1c6768 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6768u;
            // 0x1c676c: 0x24760520  addiu       $s6, $v1, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 1312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6768) {
            ctx->pc = 0x1C6830u;
            goto label_1c6830;
        }
    }
    ctx->pc = 0x1C6770u;
    // 0x1c6770: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x1c6770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x1c6774: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1c6774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1c6778: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x1c6778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c677c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1c677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1c6780: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1c6780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6784: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1c6784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c6788: 0xc4660420  lwc1        $f6, 0x420($v1)
    ctx->pc = 0x1c6788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c678c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c678cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6790: 0xc46504a0  lwc1        $f5, 0x4A0($v1)
    ctx->pc = 0x1c6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c6794: 0xc6a405b0  lwc1        $f4, 0x5B0($s5)
    ctx->pc = 0x1c6794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c6798: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1c6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c679c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1c679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c67a0: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1c67a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1c67a4: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x1c67a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1c67a8: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1c67a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c67ac: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x1c67acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x1c67b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c67b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c67b4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1c67b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1c67b8: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1c67b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c67bc: 0x46052302  mul.s       $f12, $f4, $f5
    ctx->pc = 0x1c67bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1c67c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c67c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c67c4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1c67c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1c67c8: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C67C8u;
    SET_GPR_U32(ctx, 31, 0x1C67D0u);
    ctx->pc = 0x1C67CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C67C8u;
            // 0x1c67cc: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C67D0u; }
        if (ctx->pc != 0x1C67D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C67D0u; }
        if (ctx->pc != 0x1C67D0u) { return; }
    }
    ctx->pc = 0x1C67D0u;
label_1c67d0:
    // 0x1c67d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C67D0u;
    {
        const bool branch_taken_0x1c67d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c67d0) {
            ctx->pc = 0x1C6830u;
            goto label_1c6830;
        }
    }
    ctx->pc = 0x1C67D8u;
    // 0x1c67d8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C67D8u;
    SET_GPR_U32(ctx, 31, 0x1C67E0u);
    ctx->pc = 0x1C67DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C67D8u;
            // 0x1c67dc: 0xc6cc0000  lwc1        $f12, 0x0($s6) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C67E0u; }
        if (ctx->pc != 0x1C67E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C67E0u; }
        if (ctx->pc != 0x1C67E0u) { return; }
    }
    ctx->pc = 0x1C67E0u;
label_1c67e0:
    // 0x1c67e0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c67e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c67e4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c67e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c67e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c67ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1c67ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c67f0: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C67F0u;
    SET_GPR_U32(ctx, 31, 0x1C67F8u);
    ctx->pc = 0x1C67F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C67F0u;
            // 0x1c67f4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C67F8u; }
        if (ctx->pc != 0x1C67F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C67F8u; }
        if (ctx->pc != 0x1C67F8u) { return; }
    }
    ctx->pc = 0x1C67F8u;
label_1c67f8:
    // 0x1c67f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c67fc: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1c67fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c6800: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C6800u;
    SET_GPR_U32(ctx, 31, 0x1C6808u);
    ctx->pc = 0x1C6804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6800u;
            // 0x1c6804: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6808u; }
        if (ctx->pc != 0x1C6808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6808u; }
        if (ctx->pc != 0x1C6808u) { return; }
    }
    ctx->pc = 0x1C6808u;
label_1c6808:
    // 0x1c6808: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c6808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c680c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C680Cu;
    SET_GPR_U32(ctx, 31, 0x1C6814u);
    ctx->pc = 0x1C6810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C680Cu;
            // 0x1c6810: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6814u; }
        if (ctx->pc != 0x1C6814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6814u; }
        if (ctx->pc != 0x1C6814u) { return; }
    }
    ctx->pc = 0x1C6814u;
label_1c6814:
    // 0x1c6814: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x1c6814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1c6818: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c6818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c681c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C681Cu;
    SET_GPR_U32(ctx, 31, 0x1C6824u);
    ctx->pc = 0x1C6820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C681Cu;
            // 0x1c6820: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6824u; }
        if (ctx->pc != 0x1C6824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6824u; }
        if (ctx->pc != 0x1C6824u) { return; }
    }
    ctx->pc = 0x1C6824u;
label_1c6824:
    // 0x1c6824: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c6824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c6828: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C6828u;
    SET_GPR_U32(ctx, 31, 0x1C6830u);
    ctx->pc = 0x1C682Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6828u;
            // 0x1c682c: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6830u; }
        if (ctx->pc != 0x1C6830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6830u; }
        if (ctx->pc != 0x1C6830u) { return; }
    }
    ctx->pc = 0x1C6830u;
label_1c6830:
    // 0x1c6830: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c6830u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c6834: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x1c6834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1c6838: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1c6838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1c683c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1c683cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1c6840: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1C6840u;
    {
        const bool branch_taken_0x1c6840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6840u;
            // 0x1c6844: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6840) {
            ctx->pc = 0x1C6748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c6748;
        }
    }
    ctx->pc = 0x1C6848u;
    // 0x1c6848: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1C6848u;
    SET_GPR_U32(ctx, 31, 0x1C6850u);
    ctx->pc = 0x1C684Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6848u;
            // 0x1c684c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6850u; }
        if (ctx->pc != 0x1C6850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6850u; }
        if (ctx->pc != 0x1C6850u) { return; }
    }
    ctx->pc = 0x1C6850u;
label_1c6850:
    // 0x1c6850: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c6850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c6854: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c6854u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c6858: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c6858u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c685c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c685cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6860: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c6860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6864: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c6864u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c6868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c686c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c686cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6870: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6870u;
            // 0x1c6874: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6878u;
}
