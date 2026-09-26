#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgLoopFishing2__FP11SubGameInfo
// Address: 0x2fe050 - 0x2fe144
void sgLoopFishing2__FP11SubGameInfo_0x2fe050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgLoopFishing2__FP11SubGameInfo_0x2fe050");
#endif

    switch (ctx->pc) {
        case 0x2fe084u: goto label_2fe084;
        case 0x2fe094u: goto label_2fe094;
        case 0x2fe0a0u: goto label_2fe0a0;
        case 0x2fe0c4u: goto label_2fe0c4;
        case 0x2fe0e0u: goto label_2fe0e0;
        case 0x2fe0f8u: goto label_2fe0f8;
        case 0x2fe110u: goto label_2fe110;
        case 0x2fe128u: goto label_2fe128;
        default: break;
    }

    ctx->pc = 0x2fe050u;

    // 0x2fe050: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x2fe050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
    // 0x2fe054: 0x3421bfd0  ori         $at, $at, 0xBFD0
    ctx->pc = 0x2fe054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49104);
    // 0x2fe058: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x2fe058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x2fe05c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe064: 0x8f829fe8  lw          $v0, -0x6018($gp)
    ctx->pc = 0x2fe064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942696)));
    // 0x2fe068: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE068u;
    {
        const bool branch_taken_0x2fe068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE068u;
            // 0x2fe06c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe068) {
            ctx->pc = 0x2FE078u;
            goto label_2fe078;
        }
    }
    ctx->pc = 0x2FE070u;
    // 0x2fe070: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2FE070u;
    {
        const bool branch_taken_0x2fe070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE070u;
            // 0x2fe074: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe070) {
            ctx->pc = 0x2FE130u;
            goto label_2fe130;
        }
    }
    ctx->pc = 0x2FE078u;
label_2fe078:
    // 0x2fe078: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2fe078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fe07c: 0xc05cdc0  jal         func_173700
    ctx->pc = 0x2FE07Cu;
    SET_GPR_U32(ctx, 31, 0x2FE084u);
    ctx->pc = 0x2FE080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE07Cu;
            // 0x2fe080: 0x8f849fa0  lw          $a0, -0x6060($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942624)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE084u; }
        if (ctx->pc != 0x2FE084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE084u; }
        if (ctx->pc != 0x2FE084u) { return; }
    }
    ctx->pc = 0x2FE084u;
label_2fe084:
    // 0x2fe084: 0x8f829f7c  lw          $v0, -0x6084($gp)
    ctx->pc = 0x2fe084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942588)));
    // 0x2fe088: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2fe088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2fe08c: 0xc04db0c  jal         func_136C30
    ctx->pc = 0x2FE08Cu;
    SET_GPR_U32(ctx, 31, 0x2FE094u);
    ctx->pc = 0x2FE090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE08Cu;
            // 0x2fe090: 0x8f859fb8  lw          $a1, -0x6048($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE094u; }
        if (ctx->pc != 0x2FE094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE094u; }
        if (ctx->pc != 0x2FE094u) { return; }
    }
    ctx->pc = 0x2FE094u;
label_2fe094:
    // 0x2fe094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe098: 0xc0c44a4  jal         func_311290
    ctx->pc = 0x2FE098u;
    SET_GPR_U32(ctx, 31, 0x2FE0A0u);
    ctx->pc = 0x2FE09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE098u;
            // 0x2fe09c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x311290u;
    if (runtime->hasFunction(0x311290u)) {
        auto targetFn = runtime->lookupFunction(0x311290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0A0u; }
        if (ctx->pc != 0x2FE0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RodStep__FP6CSceneP1_0x311290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0A0u; }
        if (ctx->pc != 0x2FE0A0u) { return; }
    }
    ctx->pc = 0x2FE0A0u;
label_2fe0a0:
    // 0x2fe0a0: 0x8f839fe0  lw          $v1, -0x6020($gp)
    ctx->pc = 0x2fe0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942688)));
    // 0x2fe0a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2fe0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2fe0a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE0A8u;
    {
        const bool branch_taken_0x2fe0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FE0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0A8u;
            // 0x2fe0ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0a8) {
            ctx->pc = 0x2FE0B8u;
            goto label_2fe0b8;
        }
    }
    ctx->pc = 0x2FE0B0u;
    // 0x2fe0b0: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FE0B0u;
    {
        const bool branch_taken_0x2fe0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FE0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0B0u;
            // 0x2fe0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0b0) {
            ctx->pc = 0x2FE12Cu;
            goto label_2fe12c;
        }
    }
    ctx->pc = 0x2FE0B8u;
label_2fe0b8:
    // 0x2fe0b8: 0x8e052e50  lw          $a1, 0x2E50($s0)
    ctx->pc = 0x2fe0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11856)));
    // 0x2fe0bc: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2FE0BCu;
    SET_GPR_U32(ctx, 31, 0x2FE0C4u);
    ctx->pc = 0x2FE0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0BCu;
            // 0x2fe0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0C4u; }
        if (ctx->pc != 0x2FE0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0C4u; }
        if (ctx->pc != 0x2FE0C4u) { return; }
    }
    ctx->pc = 0x2FE0C4u;
label_2fe0c4:
    // 0x2fe0c4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FE0C4u;
    {
        const bool branch_taken_0x2fe0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe0c4) {
            ctx->pc = 0x2FE128u;
            goto label_2fe128;
        }
    }
    ctx->pc = 0x2FE0CCu;
    // 0x2fe0cc: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2fe0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2fe0d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE0D0u;
    {
        const bool branch_taken_0x2fe0d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0D0u;
            // 0x2fe0d4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0d0) {
            ctx->pc = 0x2FE0E4u;
            goto label_2fe0e4;
        }
    }
    ctx->pc = 0x2FE0D8u;
    // 0x2fe0d8: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2FE0D8u;
    SET_GPR_U32(ctx, 31, 0x2FE0E0u);
    ctx->pc = 0x2FE0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0D8u;
            // 0x2fe0dc: 0x24a51f78  addiu       $a1, $a1, 0x1F78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0E0u; }
        if (ctx->pc != 0x2FE0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0E0u; }
        if (ctx->pc != 0x2FE0E0u) { return; }
    }
    ctx->pc = 0x2FE0E0u;
label_2fe0e0:
    // 0x2fe0e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fe0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fe0e4:
    // 0x2fe0e4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FE0E4u;
    {
        const bool branch_taken_0x2fe0e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0E4u;
            // 0x2fe0e8: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0e4) {
            ctx->pc = 0x2FE128u;
            goto label_2fe128;
        }
    }
    ctx->pc = 0x2FE0ECu;
    // 0x2fe0ec: 0x34214020  ori         $at, $at, 0x4020
    ctx->pc = 0x2fe0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16416);
    // 0x2fe0f0: 0xc04de0c  jal         func_137830
    ctx->pc = 0x2FE0F0u;
    SET_GPR_U32(ctx, 31, 0x2FE0F8u);
    ctx->pc = 0x2FE0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE0F0u;
            // 0x2fe0f4: 0x3a12821  addu        $a1, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0F8u; }
        if (ctx->pc != 0x2FE0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE0F8u; }
        if (ctx->pc != 0x2FE0F8u) { return; }
    }
    ctx->pc = 0x2FE0F8u;
label_2fe0f8:
    // 0x2fe0f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2fe0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2fe0fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2fe0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2fe100: 0x34214020  ori         $at, $at, 0x4020
    ctx->pc = 0x2fe100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16416);
    // 0x2fe104: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fe104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fe108: 0xc0c41d0  jal         func_310740
    ctx->pc = 0x2FE108u;
    SET_GPR_U32(ctx, 31, 0x2FE110u);
    ctx->pc = 0x2FE10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE108u;
            // 0x2fe10c: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310740u;
    if (runtime->hasFunction(0x310740u)) {
        auto targetFn = runtime->lookupFunction(0x310740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE110u; }
        if (ctx->pc != 0x2FE110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CatchLine__FPff_0x310740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE110u; }
        if (ctx->pc != 0x2FE110u) { return; }
    }
    ctx->pc = 0x2FE110u;
label_2fe110:
    // 0x2fe110: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE110u;
    {
        const bool branch_taken_0x2fe110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE110u;
            // 0x2fe114: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe110) {
            ctx->pc = 0x2FE128u;
            goto label_2fe128;
        }
    }
    ctx->pc = 0x2FE118u;
    // 0x2fe118: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2fe118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2fe11c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fe11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fe120: 0xc0c4224  jal         func_310890
    ctx->pc = 0x2FE120u;
    SET_GPR_U32(ctx, 31, 0x2FE128u);
    ctx->pc = 0x310890u;
    if (runtime->hasFunction(0x310890u)) {
        auto targetFn = runtime->lookupFunction(0x310890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE128u; }
        if (ctx->pc != 0x2FE128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SlowLineVelo__Ff_0x310890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE128u; }
        if (ctx->pc != 0x2FE128u) { return; }
    }
    ctx->pc = 0x2FE128u;
label_2fe128:
    // 0x2fe128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fe12c:
    // 0x2fe12c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fe130:
    // 0x2fe130: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2fe130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2fe134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe138: 0x34214030  ori         $at, $at, 0x4030
    ctx->pc = 0x2fe138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16432);
    // 0x2fe13c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE13Cu;
            // 0x2fe140: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE144u;
}
