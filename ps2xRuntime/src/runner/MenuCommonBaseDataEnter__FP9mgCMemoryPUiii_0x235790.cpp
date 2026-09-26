#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCommonBaseDataEnter__FP9mgCMemoryPUiii
// Address: 0x235790 - 0x2358b4
void MenuCommonBaseDataEnter__FP9mgCMemoryPUiii_0x235790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCommonBaseDataEnter__FP9mgCMemoryPUiii_0x235790");
#endif

    switch (ctx->pc) {
        case 0x2357e0u: goto label_2357e0;
        case 0x2357f4u: goto label_2357f4;
        case 0x235810u: goto label_235810;
        case 0x235824u: goto label_235824;
        case 0x235840u: goto label_235840;
        case 0x235854u: goto label_235854;
        case 0x235870u: goto label_235870;
        case 0x235878u: goto label_235878;
        case 0x235888u: goto label_235888;
        case 0x235890u: goto label_235890;
        case 0x235898u: goto label_235898;
        default: break;
    }

    ctx->pc = 0x235790u;

    // 0x235790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x235790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x235794: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x235794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x235798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x235798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x23579c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23579cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2357a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2357a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2357a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2357a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2357a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2357ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2357acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2357b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2357b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2357b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357b8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2357b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2357bc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2357BCu;
    {
        const bool branch_taken_0x2357bc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2357C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2357BCu;
            // 0x2357c0: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357bc) {
            ctx->pc = 0x2357CCu;
            goto label_2357cc;
        }
    }
    ctx->pc = 0x2357C4u;
    // 0x2357c4: 0x24c2000f  addiu       $v0, $a2, 0xF
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2357c8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2357c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_2357cc:
    // 0x2357cc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2357ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2357d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2357d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357d4: 0x2484d590  addiu       $a0, $a0, -0x2A70
    ctx->pc = 0x2357d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956432));
    // 0x2357d8: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2357D8u;
    SET_GPR_U32(ctx, 31, 0x2357E0u);
    ctx->pc = 0x2357DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2357D8u;
            // 0x2357dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2357E0u; }
        if (ctx->pc != 0x2357E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2357E0u; }
        if (ctx->pc != 0x2357E0u) { return; }
    }
    ctx->pc = 0x2357E0u;
label_2357e0:
    // 0x2357e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2357e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2357e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2357e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357e8: 0x24a5a990  addiu       $a1, $a1, -0x5670
    ctx->pc = 0x2357e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945168));
    // 0x2357ec: 0xc052734  jal         func_149CD0
    ctx->pc = 0x2357ECu;
    SET_GPR_U32(ctx, 31, 0x2357F4u);
    ctx->pc = 0x2357F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2357ECu;
            // 0x2357f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2357F4u; }
        if (ctx->pc != 0x2357F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2357F4u; }
        if (ctx->pc != 0x2357F4u) { return; }
    }
    ctx->pc = 0x2357F4u;
label_2357f4:
    // 0x2357f4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2357f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2357f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2357f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357fc: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2357fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x235800: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x235800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x235804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235808: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x235808u;
    SET_GPR_U32(ctx, 31, 0x235810u);
    ctx->pc = 0x23580Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235808u;
            // 0x23580c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235810u; }
        if (ctx->pc != 0x235810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235810u; }
        if (ctx->pc != 0x235810u) { return; }
    }
    ctx->pc = 0x235810u;
label_235810:
    // 0x235810: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x235810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235814: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235818: 0x24a5a9a0  addiu       $a1, $a1, -0x5660
    ctx->pc = 0x235818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945184));
    // 0x23581c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x23581Cu;
    SET_GPR_U32(ctx, 31, 0x235824u);
    ctx->pc = 0x235820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23581Cu;
            // 0x235820: 0x27a6005c  addiu       $a2, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235824u; }
        if (ctx->pc != 0x235824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235824u; }
        if (ctx->pc != 0x235824u) { return; }
    }
    ctx->pc = 0x235824u;
label_235824:
    // 0x235824: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x235824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x235828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23582c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x23582cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x235830: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x235830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235834: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x235834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235838: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x235838u;
    SET_GPR_U32(ctx, 31, 0x235840u);
    ctx->pc = 0x23583Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235838u;
            // 0x23583c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235840u; }
        if (ctx->pc != 0x235840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235840u; }
        if (ctx->pc != 0x235840u) { return; }
    }
    ctx->pc = 0x235840u;
label_235840:
    // 0x235840: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x235840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x235844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235848: 0x24a5a9b0  addiu       $a1, $a1, -0x5650
    ctx->pc = 0x235848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945200));
    // 0x23584c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x23584Cu;
    SET_GPR_U32(ctx, 31, 0x235854u);
    ctx->pc = 0x235850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23584Cu;
            // 0x235850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235854u; }
        if (ctx->pc != 0x235854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235854u; }
        if (ctx->pc != 0x235854u) { return; }
    }
    ctx->pc = 0x235854u;
label_235854:
    // 0x235854: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235854u;
    {
        const bool branch_taken_0x235854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235854u;
            // 0x235858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235854) {
            ctx->pc = 0x235870u;
            goto label_235870;
        }
    }
    ctx->pc = 0x23585Cu;
    // 0x23585c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23585cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235860: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x235860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235864: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x235864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235868: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x235868u;
    SET_GPR_U32(ctx, 31, 0x235870u);
    ctx->pc = 0x23586Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235868u;
            // 0x23586c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235870u; }
        if (ctx->pc != 0x235870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235870u; }
        if (ctx->pc != 0x235870u) { return; }
    }
    ctx->pc = 0x235870u;
label_235870:
    // 0x235870: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x235870u;
    SET_GPR_U32(ctx, 31, 0x235878u);
    ctx->pc = 0x235874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235870u;
            // 0x235874: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235878u; }
        if (ctx->pc != 0x235878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235878u; }
        if (ctx->pc != 0x235878u) { return; }
    }
    ctx->pc = 0x235878u;
label_235878:
    // 0x235878: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x235878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x23587c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23587cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235880: 0xc08b18c  jal         func_22C630
    ctx->pc = 0x235880u;
    SET_GPR_U32(ctx, 31, 0x235888u);
    ctx->pc = 0x235884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235880u;
            // 0x235884: 0xaf918308  sw          $s1, -0x7CF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935304), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C630u;
    if (runtime->hasFunction(0x22C630u)) {
        auto targetFn = runtime->lookupFunction(0x22C630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235888u; }
        if (ctx->pc != 0x235888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MallocPallet__18CMenuPosDataManageFP9mgCMemory_0x22c630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235888u; }
        if (ctx->pc != 0x235888u) { return; }
    }
    ctx->pc = 0x235888u;
label_235888:
    // 0x235888: 0xc08b2a8  jal         func_22CAA0
    ctx->pc = 0x235888u;
    SET_GPR_U32(ctx, 31, 0x235890u);
    ctx->pc = 0x23588Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235888u;
            // 0x23588c: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CAA0u;
    if (runtime->hasFunction(0x22CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x22CAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235890u; }
        if (ctx->pc != 0x235890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchTransPalletNo__18CMenuPosDataManageFv_0x22caa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235890u; }
        if (ctx->pc != 0x235890u) { return; }
    }
    ctx->pc = 0x235890u;
label_235890:
    // 0x235890: 0xc08aa80  jal         func_22AA00
    ctx->pc = 0x235890u;
    SET_GPR_U32(ctx, 31, 0x235898u);
    ctx->pc = 0x235894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235890u;
            // 0x235894: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AA00u;
    if (runtime->hasFunction(0x22AA00u)) {
        auto targetFn = runtime->lookupFunction(0x22AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235898u; }
        if (ctx->pc != 0x235898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureInfoAll__14CPosDataManageFv_0x22aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235898u; }
        if (ctx->pc != 0x235898u) { return; }
    }
    ctx->pc = 0x235898u;
label_235898:
    // 0x235898: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x235898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23589c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23589cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2358a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2358a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2358a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2358a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2358a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2358a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2358ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2358ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2358B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2358ACu;
            // 0x2358b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2358B4u;
}
