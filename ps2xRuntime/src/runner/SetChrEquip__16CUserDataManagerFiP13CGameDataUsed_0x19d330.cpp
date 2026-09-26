#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetChrEquip__16CUserDataManagerFiP13CGameDataUsed
// Address: 0x19d330 - 0x19d4b0
void SetChrEquip__16CUserDataManagerFiP13CGameDataUsed_0x19d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetChrEquip__16CUserDataManagerFiP13CGameDataUsed_0x19d330");
#endif

    switch (ctx->pc) {
        case 0x19d370u: goto label_19d370;
        case 0x19d380u: goto label_19d380;
        case 0x19d388u: goto label_19d388;
        case 0x19d3a8u: goto label_19d3a8;
        case 0x19d3b8u: goto label_19d3b8;
        case 0x19d3f4u: goto label_19d3f4;
        case 0x19d404u: goto label_19d404;
        case 0x19d424u: goto label_19d424;
        case 0x19d42cu: goto label_19d42c;
        case 0x19d458u: goto label_19d458;
        case 0x19d468u: goto label_19d468;
        default: break;
    }

    ctx->pc = 0x19d330u;

    // 0x19d330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19d334: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x19d334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x19d338: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19d338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19d33c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19d33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19d340: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19d340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19d344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19d344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19d348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d34c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19d34cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19d354: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19d354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d358: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D358u;
    {
        const bool branch_taken_0x19d358 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D358u;
            // 0x19d35c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d358) {
            ctx->pc = 0x19D368u;
            goto label_19d368;
        }
    }
    ctx->pc = 0x19D360u;
    // 0x19d360: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x19D360u;
    {
        const bool branch_taken_0x19d360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D360u;
            // 0x19d364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d360) {
            ctx->pc = 0x19D48Cu;
            goto label_19d48c;
        }
    }
    ctx->pc = 0x19D368u;
label_19d368:
    // 0x19d368: 0xc06517c  jal         func_1945F0
    ctx->pc = 0x19D368u;
    SET_GPR_U32(ctx, 31, 0x19D370u);
    ctx->pc = 0x1945F0u;
    if (runtime->hasFunction(0x1945F0u)) {
        auto targetFn = runtime->lookupFunction(0x1945F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D370u; }
        if (ctx->pc != 0x19D370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataPt__Fv_0x1945f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D370u; }
        if (ctx->pc != 0x19D370u) { return; }
    }
    ctx->pc = 0x19D370u;
label_19d370:
    // 0x19d370: 0x86150002  lh          $s5, 0x2($s0)
    ctx->pc = 0x19d370u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x19d374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d378: 0xc0656e0  jal         func_195B80
    ctx->pc = 0x19D378u;
    SET_GPR_U32(ctx, 31, 0x19D380u);
    ctx->pc = 0x19D37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D378u;
            // 0x19d37c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195B80u;
    if (runtime->hasFunction(0x195B80u)) {
        auto targetFn = runtime->lookupFunction(0x195B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D380u; }
        if (ctx->pc != 0x19D380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDataType__9CGameDataFi_0x195b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D380u; }
        if (ctx->pc != 0x19D380u) { return; }
    }
    ctx->pc = 0x19D380u;
label_19d380:
    // 0x19d380: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x19D380u;
    SET_GPR_U32(ctx, 31, 0x19D388u);
    ctx->pc = 0x19D384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D380u;
            // 0x19d384: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D388u; }
        if (ctx->pc != 0x19D388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D388u; }
        if (ctx->pc != 0x19D388u) { return; }
    }
    ctx->pc = 0x19D388u;
label_19d388:
    // 0x19d388: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D388u;
    {
        const bool branch_taken_0x19d388 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D388u;
            // 0x19d38c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d388) {
            ctx->pc = 0x19D39Cu;
            goto label_19d39c;
        }
    }
    ctx->pc = 0x19D390u;
    // 0x19d390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d394: 0x1622001f  bne         $s1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19D394u;
    {
        const bool branch_taken_0x19d394 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D394u;
            // 0x19d398: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d394) {
            ctx->pc = 0x19D414u;
            goto label_19d414;
        }
    }
    ctx->pc = 0x19D39Cu;
label_19d39c:
    // 0x19d39c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19d39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d3a0: 0xc066d24  jal         func_19B490
    ctx->pc = 0x19D3A0u;
    SET_GPR_U32(ctx, 31, 0x19D3A8u);
    ctx->pc = 0x19D3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3A0u;
            // 0x19d3a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3A8u; }
        if (ctx->pc != 0x19D3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3A8u; }
        if (ctx->pc != 0x19D3A8u) { return; }
    }
    ctx->pc = 0x19D3A8u;
label_19d3a8:
    // 0x19d3a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19d3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d3ac: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x19d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x19d3b0: 0xc06847c  jal         func_1A11F0
    ctx->pc = 0x19D3B0u;
    SET_GPR_U32(ctx, 31, 0x19D3B8u);
    ctx->pc = 0x19D3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3B0u;
            // 0x19d3b4: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A11F0u;
    if (runtime->hasFunction(0x1A11F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A11F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3B8u; }
        if (ctx->pc != 0x19D3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsItemtypeWhoisEquip__FiPi_0x1a11f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3B8u; }
        if (ctx->pc != 0x19D3B8u) { return; }
    }
    ctx->pc = 0x19D3B8u;
label_19d3b8:
    // 0x19d3b8: 0x14510015  bne         $v0, $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x19D3B8u;
    {
        const bool branch_taken_0x19d3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x19d3b8) {
            ctx->pc = 0x19D410u;
            goto label_19d410;
        }
    }
    ctx->pc = 0x19D3C0u;
    // 0x19d3c0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x19d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x19d3c4: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x19d3c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x19d3c8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x19D3C8u;
    {
        const bool branch_taken_0x19d3c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3C8u;
            // 0x19d3cc: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3c8) {
            ctx->pc = 0x19D410u;
            goto label_19d410;
        }
    }
    ctx->pc = 0x19D3D0u;
    // 0x19d3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d3d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d3d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d3dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d3e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d3e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d3e8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x19d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19d3ec: 0xc065ba0  jal         func_196E80
    ctx->pc = 0x19D3ECu;
    SET_GPR_U32(ctx, 31, 0x19D3F4u);
    ctx->pc = 0x19D3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3ECu;
            // 0x19d3f0: 0x24450170  addiu       $a1, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3F4u; }
        if (ctx->pc != 0x19D3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D3F4u; }
        if (ctx->pc != 0x19D3F4u) { return; }
    }
    ctx->pc = 0x19D3F4u;
label_19d3f4:
    // 0x19d3f4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D3F4u;
    {
        const bool branch_taken_0x19d3f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3F4u;
            // 0x19d3f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d3f4) {
            ctx->pc = 0x19D408u;
            goto label_19d408;
        }
    }
    ctx->pc = 0x19D3FCu;
    // 0x19d3fc: 0xc067d48  jal         func_19F520
    ctx->pc = 0x19D3FCu;
    SET_GPR_U32(ctx, 31, 0x19D404u);
    ctx->pc = 0x19D400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D3FCu;
            // 0x19d400: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F520u;
    if (runtime->hasFunction(0x19F520u)) {
        auto targetFn = runtime->lookupFunction(0x19F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D404u; }
        if (ctx->pc != 0x19D404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshParamater__16CBattleCharaInfoFv_0x19f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D404u; }
        if (ctx->pc != 0x19D404u) { return; }
    }
    ctx->pc = 0x19D404u;
label_19d404:
    // 0x19d404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d408:
    // 0x19d408: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19D408u;
    {
        const bool branch_taken_0x19d408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D408u;
            // 0x19d40c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d408) {
            ctx->pc = 0x19D490u;
            goto label_19d490;
        }
    }
    ctx->pc = 0x19D410u;
label_19d410:
    // 0x19d410: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19d410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d414:
    // 0x19d414: 0x1622001b  bne         $s1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19D414u;
    {
        const bool branch_taken_0x19d414 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D414u;
            // 0x19d418: 0x26514660  addiu       $s1, $s2, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 18016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d414) {
            ctx->pc = 0x19D484u;
            goto label_19d484;
        }
    }
    ctx->pc = 0x19D41Cu;
    // 0x19d41c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19d41cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d420: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19d420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19d424:
    // 0x19d424: 0xc068460  jal         func_1A1180
    ctx->pc = 0x19D424u;
    SET_GPR_U32(ctx, 31, 0x19D42Cu);
    ctx->pc = 0x19D428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D424u;
            // 0x19d428: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1180u;
    if (runtime->hasFunction(0x1A1180u)) {
        auto targetFn = runtime->lookupFunction(0x1A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D42Cu; }
        if (ctx->pc != 0x19D42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEquipType__Fii_0x1a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D42Cu; }
        if (ctx->pc != 0x19D42Cu) { return; }
    }
    ctx->pc = 0x19D42Cu;
label_19d42c:
    // 0x19d42c: 0x16620011  bne         $s3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19D42Cu;
    {
        const bool branch_taken_0x19d42c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D42Cu;
            // 0x19d430: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d42c) {
            ctx->pc = 0x19D474u;
            goto label_19d474;
        }
    }
    ctx->pc = 0x19D434u;
    // 0x19d434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19d434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d438: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x19d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x19d43c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19d43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d440: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19d440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19d444: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19d444u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19d448: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19d448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19d44c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x19d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x19d450: 0xc065ba0  jal         func_196E80
    ctx->pc = 0x19D450u;
    SET_GPR_U32(ctx, 31, 0x19D458u);
    ctx->pc = 0x19D454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D450u;
            // 0x19d454: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D458u; }
        if (ctx->pc != 0x19D458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D458u; }
        if (ctx->pc != 0x19D458u) { return; }
    }
    ctx->pc = 0x19D458u;
label_19d458:
    // 0x19d458: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D458u;
    {
        const bool branch_taken_0x19d458 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D458u;
            // 0x19d45c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d458) {
            ctx->pc = 0x19D46Cu;
            goto label_19d46c;
        }
    }
    ctx->pc = 0x19D460u;
    // 0x19d460: 0xc067d48  jal         func_19F520
    ctx->pc = 0x19D460u;
    SET_GPR_U32(ctx, 31, 0x19D468u);
    ctx->pc = 0x19D464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D460u;
            // 0x19d464: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F520u;
    if (runtime->hasFunction(0x19F520u)) {
        auto targetFn = runtime->lookupFunction(0x19F520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D468u; }
        if (ctx->pc != 0x19D468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RefreshParamater__16CBattleCharaInfoFv_0x19f520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D468u; }
        if (ctx->pc != 0x19D468u) { return; }
    }
    ctx->pc = 0x19D468u;
label_19d468:
    // 0x19d468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19d46c:
    // 0x19d46c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19D46Cu;
    {
        const bool branch_taken_0x19d46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d46c) {
            ctx->pc = 0x19D48Cu;
            goto label_19d48c;
        }
    }
    ctx->pc = 0x19D474u;
label_19d474:
    // 0x19d474: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19d474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x19d478: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x19d478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19d47c: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x19D47Cu;
    {
        const bool branch_taken_0x19d47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D47Cu;
            // 0x19d480: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d47c) {
            ctx->pc = 0x19D424u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19d424;
        }
    }
    ctx->pc = 0x19D484u;
label_19d484:
    // 0x19d484: 0x0  nop
    ctx->pc = 0x19d484u;
    // NOP
    // 0x19d488: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19d488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19d48c:
    // 0x19d48c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19d48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19d490:
    // 0x19d490: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19d490u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d494: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19d494u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d498: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d49c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d49cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d4a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d4a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d4a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x19D4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4A8u;
            // 0x19d4ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D4B0u;
}
