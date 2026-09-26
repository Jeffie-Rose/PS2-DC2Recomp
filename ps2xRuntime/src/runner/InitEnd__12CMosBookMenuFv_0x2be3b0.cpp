#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEnd__12CMosBookMenuFv
// Address: 0x2be3b0 - 0x2be5d4
void InitEnd__12CMosBookMenuFv_0x2be3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEnd__12CMosBookMenuFv_0x2be3b0");
#endif

    switch (ctx->pc) {
        case 0x2be3f4u: goto label_2be3f4;
        case 0x2be414u: goto label_2be414;
        case 0x2be428u: goto label_2be428;
        case 0x2be444u: goto label_2be444;
        case 0x2be45cu: goto label_2be45c;
        case 0x2be478u: goto label_2be478;
        case 0x2be494u: goto label_2be494;
        case 0x2be4a8u: goto label_2be4a8;
        case 0x2be4d4u: goto label_2be4d4;
        case 0x2be4ecu: goto label_2be4ec;
        case 0x2be4f4u: goto label_2be4f4;
        case 0x2be4fcu: goto label_2be4fc;
        case 0x2be514u: goto label_2be514;
        case 0x2be564u: goto label_2be564;
        case 0x2be59cu: goto label_2be59c;
        case 0x2be5acu: goto label_2be5ac;
        case 0x2be5bcu: goto label_2be5bc;
        default: break;
    }

    ctx->pc = 0x2be3b0u;

    // 0x2be3b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2be3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2be3b4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2be3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2be3b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2be3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2be3bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2be3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be3c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2be3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2be3c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2be3c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2be3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2be3cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2be3ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be3d0: 0x8c23d194  lw          $v1, -0x2E6C($at)
    ctx->pc = 0x2be3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955412)));
    // 0x2be3d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2be3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2be3d8: 0x2484f7d0  addiu       $a0, $a0, -0x830
    ctx->pc = 0x2be3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965200));
    // 0x2be3dc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2be3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2be3e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2be3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2be3e4: 0x8c22d190  lw          $v0, -0x2E70($at)
    ctx->pc = 0x2be3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955408)));
    // 0x2be3e8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2be3e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2be3ec: 0xc094440  jal         func_251100
    ctx->pc = 0x2BE3ECu;
    SET_GPR_U32(ctx, 31, 0x2BE3F4u);
    ctx->pc = 0x2BE3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3ECu;
            // 0x2be3f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE3F4u; }
        if (ctx->pc != 0x2BE3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE3F4u; }
        if (ctx->pc != 0x2BE3F4u) { return; }
    }
    ctx->pc = 0x2BE3F4u;
label_2be3f4:
    // 0x2be3f4: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2be3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2be3f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE3F8u;
    {
        const bool branch_taken_0x2be3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE3F8u;
            // 0x2be3fc: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3f8) {
            ctx->pc = 0x2BE408u;
            goto label_2be408;
        }
    }
    ctx->pc = 0x2BE400u;
    // 0x2be400: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2be400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2be404: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2be404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2be408:
    // 0x2be408: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2be408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2be40c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2BE40Cu;
    SET_GPR_U32(ctx, 31, 0x2BE414u);
    ctx->pc = 0x2BE410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE40Cu;
            // 0x2be410: 0x2484d170  addiu       $a0, $a0, -0x2E90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE414u; }
        if (ctx->pc != 0x2BE414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE414u; }
        if (ctx->pc != 0x2BE414u) { return; }
    }
    ctx->pc = 0x2BE414u;
label_2be414:
    // 0x2be414: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2be414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2be418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be41c: 0x24a5f7e0  addiu       $a1, $a1, -0x820
    ctx->pc = 0x2be41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965216));
    // 0x2be420: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2BE420u;
    SET_GPR_U32(ctx, 31, 0x2BE428u);
    ctx->pc = 0x2BE424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE420u;
            // 0x2be424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE428u; }
        if (ctx->pc != 0x2BE428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE428u; }
        if (ctx->pc != 0x2BE428u) { return; }
    }
    ctx->pc = 0x2BE428u;
label_2be428:
    // 0x2be428: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x2be428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2be42c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2be42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2be430: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2be430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be434: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2be434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2be438: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2be438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be43c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2BE43Cu;
    SET_GPR_U32(ctx, 31, 0x2BE444u);
    ctx->pc = 0x2BE440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE43Cu;
            // 0x2be440: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE444u; }
        if (ctx->pc != 0x2BE444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE444u; }
        if (ctx->pc != 0x2BE444u) { return; }
    }
    ctx->pc = 0x2BE444u;
label_2be444:
    // 0x2be444: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2be444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2be448: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2be448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2be44c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2be44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2be450: 0x24a5f068  addiu       $a1, $a1, -0xF98
    ctx->pc = 0x2be450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963304));
    // 0x2be454: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2BE454u;
    SET_GPR_U32(ctx, 31, 0x2BE45Cu);
    ctx->pc = 0x2BE458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE454u;
            // 0x2be458: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE45Cu; }
        if (ctx->pc != 0x2BE45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE45Cu; }
        if (ctx->pc != 0x2BE45Cu) { return; }
    }
    ctx->pc = 0x2BE45Cu;
label_2be45c:
    // 0x2be45c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2be45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2be460: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2be460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2be464: 0xaf829c3c  sw          $v0, -0x63C4($gp)
    ctx->pc = 0x2be464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941756), GPR_U32(ctx, 2));
    // 0x2be468: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2be468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2be46c: 0x24a5f7e8  addiu       $a1, $a1, -0x818
    ctx->pc = 0x2be46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965224));
    // 0x2be470: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2BE470u;
    SET_GPR_U32(ctx, 31, 0x2BE478u);
    ctx->pc = 0x2BE474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE470u;
            // 0x2be474: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE478u; }
        if (ctx->pc != 0x2BE478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE478u; }
        if (ctx->pc != 0x2BE478u) { return; }
    }
    ctx->pc = 0x2BE478u;
label_2be478:
    // 0x2be478: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2be478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2be47c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2be47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2be480: 0xaf829c38  sw          $v0, -0x63C8($gp)
    ctx->pc = 0x2be480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941752), GPR_U32(ctx, 2));
    // 0x2be484: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2be484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2be488: 0x24a5f7f0  addiu       $a1, $a1, -0x810
    ctx->pc = 0x2be488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965232));
    // 0x2be48c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2BE48Cu;
    SET_GPR_U32(ctx, 31, 0x2BE494u);
    ctx->pc = 0x2BE490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE48Cu;
            // 0x2be490: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE494u; }
        if (ctx->pc != 0x2BE494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE494u; }
        if (ctx->pc != 0x2BE494u) { return; }
    }
    ctx->pc = 0x2BE494u;
label_2be494:
    // 0x2be494: 0xaf829c40  sw          $v0, -0x63C0($gp)
    ctx->pc = 0x2be494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941760), GPR_U32(ctx, 2));
    // 0x2be498: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2be498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2be49c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x2be49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2be4a0: 0xc04e640  jal         func_139900
    ctx->pc = 0x2BE4A0u;
    SET_GPR_U32(ctx, 31, 0x2BE4A8u);
    ctx->pc = 0x2BE4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE4A0u;
            // 0x2be4a4: 0xae2201b4  sw          $v0, 0x1B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE4A8u; }
        if (ctx->pc != 0x2BE4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE4A8u; }
        if (ctx->pc != 0x2BE4A8u) { return; }
    }
    ctx->pc = 0x2BE4A8u;
label_2be4a8:
    // 0x2be4a8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2be4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2be4ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2be4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2be4b0: 0x8c23d198  lw          $v1, -0x2E68($at)
    ctx->pc = 0x2be4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955416)));
    // 0x2be4b4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2be4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2be4b8: 0x8c25d194  lw          $a1, -0x2E6C($at)
    ctx->pc = 0x2be4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955412)));
    // 0x2be4bc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2be4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2be4c0: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2be4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2be4c4: 0x8c22d190  lw          $v0, -0x2E70($at)
    ctx->pc = 0x2be4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294955408)));
    // 0x2be4c8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2be4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2be4cc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2BE4CCu;
    SET_GPR_U32(ctx, 31, 0x2BE4D4u);
    ctx->pc = 0x2BE4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE4CCu;
            // 0x2be4d0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE4D4u; }
        if (ctx->pc != 0x2BE4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE4D4u; }
        if (ctx->pc != 0x2BE4D4u) { return; }
    }
    ctx->pc = 0x2BE4D4u;
label_2be4d4:
    // 0x2be4d4: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2be4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2be4d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2be4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2be4dc: 0x26250184  addiu       $a1, $s1, 0x184
    ctx->pc = 0x2be4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 388));
    // 0x2be4e0: 0x24c6cac0  addiu       $a2, $a2, -0x3540
    ctx->pc = 0x2be4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
    // 0x2be4e4: 0xc0ac028  jal         func_2B00A0
    ctx->pc = 0x2BE4E4u;
    SET_GPR_U32(ctx, 31, 0x2BE4ECu);
    ctx->pc = 0x2BE4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE4E4u;
            // 0x2be4e8: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A0u;
    if (runtime->hasFunction(0x2B00A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B00A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE4ECu; }
        if (ctx->pc != 0x2BE4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE4ECu; }
        if (ctx->pc != 0x2BE4ECu) { return; }
    }
    ctx->pc = 0x2BE4ECu;
label_2be4ec:
    // 0x2be4ec: 0xae2007e8  sw          $zero, 0x7E8($s1)
    ctx->pc = 0x2be4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2024), GPR_U32(ctx, 0));
    // 0x2be4f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2be4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2be4f4:
    // 0x2be4f4: 0xc0af814  jal         func_2BE050
    ctx->pc = 0x2BE4F4u;
    SET_GPR_U32(ctx, 31, 0x2BE4FCu);
    ctx->pc = 0x2BE4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE4F4u;
            // 0x2be4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE050u;
    if (runtime->hasFunction(0x2BE050u)) {
        auto targetFn = runtime->lookupFunction(0x2BE050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE4FCu; }
        if (ctx->pc != 0x2BE4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBaseInfoForMonsterMemoIndex__Fi_0x2be050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE4FCu; }
        if (ctx->pc != 0x2BE4FCu) { return; }
    }
    ctx->pc = 0x2BE4FCu;
label_2be4fc:
    // 0x2be4fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2be4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be500: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2BE500u;
    {
        const bool branch_taken_0x2be500 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be500) {
            ctx->pc = 0x2BE540u;
            goto label_2be540;
        }
    }
    ctx->pc = 0x2BE508u;
    // 0x2be508: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x2be508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2be50c: 0xc068444  jal         func_1A1110
    ctx->pc = 0x2BE50Cu;
    SET_GPR_U32(ctx, 31, 0x2BE514u);
    ctx->pc = 0x2BE510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE50Cu;
            // 0x2be510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1110u;
    if (runtime->hasFunction(0x1A1110u)) {
        auto targetFn = runtime->lookupFunction(0x1A1110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE514u; }
        if (ctx->pc != 0x2BE514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KillMonsterCount__Fii_0x1a1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE514u; }
        if (ctx->pc != 0x2BE514u) { return; }
    }
    ctx->pc = 0x2BE514u;
label_2be514:
    // 0x2be514: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2be514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2be518: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE518u;
    {
        const bool branch_taken_0x2be518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2be518) {
            ctx->pc = 0x2BE540u;
            goto label_2be540;
        }
    }
    ctx->pc = 0x2BE520u;
    // 0x2be520: 0x8e2207e8  lw          $v0, 0x7E8($s1)
    ctx->pc = 0x2be520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2024)));
    // 0x2be524: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x2be524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2be528: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be52c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2be52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2be530: 0xac4301e8  sw          $v1, 0x1E8($v0)
    ctx->pc = 0x2be530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 3));
    // 0x2be534: 0x8e2207e8  lw          $v0, 0x7E8($s1)
    ctx->pc = 0x2be534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2024)));
    // 0x2be538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2be538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2be53c: 0xae2207e8  sw          $v0, 0x7E8($s1)
    ctx->pc = 0x2be53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2024), GPR_U32(ctx, 2));
label_2be540:
    // 0x2be540: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2be540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2be544: 0x2a020119  slti        $v0, $s0, 0x119
    ctx->pc = 0x2be544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)281) ? 1 : 0);
    // 0x2be548: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2BE548u;
    {
        const bool branch_taken_0x2be548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be548) {
            ctx->pc = 0x2BE4F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be4f4;
        }
    }
    ctx->pc = 0x2BE550u;
    // 0x2be550: 0x8e2507e8  lw          $a1, 0x7E8($s1)
    ctx->pc = 0x2be550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2024)));
    // 0x2be554: 0x28a10119  slti        $at, $a1, 0x119
    ctx->pc = 0x2be554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)281) ? 1 : 0);
    // 0x2be558: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE558u;
    {
        const bool branch_taken_0x2be558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE558u;
            // 0x2be55c: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be558) {
            ctx->pc = 0x2BE584u;
            goto label_2be584;
        }
    }
    ctx->pc = 0x2BE560u;
    // 0x2be560: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2be560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2be564:
    // 0x2be564: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x2be564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2be568: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2be568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2be56c: 0xac4301e8  sw          $v1, 0x1E8($v0)
    ctx->pc = 0x2be56cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 3));
    // 0x2be570: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2be570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2be574: 0x28a20119  slti        $v0, $a1, 0x119
    ctx->pc = 0x2be574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)281) ? 1 : 0);
    // 0x2be578: 0x0  nop
    ctx->pc = 0x2be578u;
    // NOP
    // 0x2be57c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2BE57Cu;
    {
        const bool branch_taken_0x2be57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be57c) {
            ctx->pc = 0x2BE564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2be564;
        }
    }
    ctx->pc = 0x2BE584u;
label_2be584:
    // 0x2be584: 0x0  nop
    ctx->pc = 0x2be584u;
    // NOP
    // 0x2be588: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x2be588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x2be58c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2be58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2be590: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2be590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2be594: 0xc066a20  jal         func_19A880
    ctx->pc = 0x2BE594u;
    SET_GPR_U32(ctx, 31, 0x2BE59Cu);
    ctx->pc = 0x2BE598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE594u;
            // 0x2be598: 0x8c4401e8  lw          $a0, 0x1E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A880u;
    if (runtime->hasFunction(0x19A880u)) {
        auto targetFn = runtime->lookupFunction(0x19A880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE59Cu; }
        if (ctx->pc != 0x2BE59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBaseInfo__Fi_0x19a880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE59Cu; }
        if (ctx->pc != 0x2BE59Cu) { return; }
    }
    ctx->pc = 0x2BE59Cu;
label_2be59c:
    // 0x2be59c: 0xae2201e4  sw          $v0, 0x1E4($s1)
    ctx->pc = 0x2be59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 2));
    // 0x2be5a0: 0x8e2501e4  lw          $a1, 0x1E4($s1)
    ctx->pc = 0x2be5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x2be5a4: 0xc0af82c  jal         func_2BE0B0
    ctx->pc = 0x2BE5A4u;
    SET_GPR_U32(ctx, 31, 0x2BE5ACu);
    ctx->pc = 0x2BE5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE5A4u;
            // 0x2be5a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BE0B0u;
    if (runtime->hasFunction(0x2BE0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BE0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE5ACu; }
        if (ctx->pc != 0x2BE5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMonsterInfo__12CMosBookMenuFP16BASE_MONSTER_TBL_0x2be0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE5ACu; }
        if (ctx->pc != 0x2BE5ACu) { return; }
    }
    ctx->pc = 0x2BE5ACu;
label_2be5ac:
    // 0x2be5ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2be5acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2be5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2be5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be5b4: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x2BE5B4u;
    SET_GPR_U32(ctx, 31, 0x2BE5BCu);
    ctx->pc = 0x2BE5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE5B4u;
            // 0x2be5b8: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE5BCu; }
        if (ctx->pc != 0x2BE5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BE5BCu; }
        if (ctx->pc != 0x2BE5BCu) { return; }
    }
    ctx->pc = 0x2BE5BCu;
label_2be5bc:
    // 0x2be5bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2be5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be5c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2be5c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be5c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2be5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be5c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2be5c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BE5CCu;
            // 0x2be5d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BE5D4u;
}
