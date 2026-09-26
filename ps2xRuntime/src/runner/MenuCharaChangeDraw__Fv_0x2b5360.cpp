#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCharaChangeDraw__Fv
// Address: 0x2b5360 - 0x2b5b10
void MenuCharaChangeDraw__Fv_0x2b5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCharaChangeDraw__Fv_0x2b5360");
#endif

    switch (ctx->pc) {
        case 0x2b539cu: goto label_2b539c;
        case 0x2b53b0u: goto label_2b53b0;
        case 0x2b53b8u: goto label_2b53b8;
        case 0x2b53ccu: goto label_2b53cc;
        case 0x2b53e4u: goto label_2b53e4;
        case 0x2b5428u: goto label_2b5428;
        case 0x2b5438u: goto label_2b5438;
        case 0x2b5468u: goto label_2b5468;
        case 0x2b5498u: goto label_2b5498;
        case 0x2b54c0u: goto label_2b54c0;
        case 0x2b54ecu: goto label_2b54ec;
        case 0x2b5508u: goto label_2b5508;
        case 0x2b5520u: goto label_2b5520;
        case 0x2b5538u: goto label_2b5538;
        case 0x2b5550u: goto label_2b5550;
        case 0x2b5568u: goto label_2b5568;
        case 0x2b5580u: goto label_2b5580;
        case 0x2b55a0u: goto label_2b55a0;
        case 0x2b55ccu: goto label_2b55cc;
        case 0x2b55dcu: goto label_2b55dc;
        case 0x2b55f8u: goto label_2b55f8;
        case 0x2b561cu: goto label_2b561c;
        case 0x2b562cu: goto label_2b562c;
        case 0x2b5640u: goto label_2b5640;
        case 0x2b5650u: goto label_2b5650;
        case 0x2b5660u: goto label_2b5660;
        case 0x2b5674u: goto label_2b5674;
        case 0x2b5680u: goto label_2b5680;
        case 0x2b5690u: goto label_2b5690;
        case 0x2b56a4u: goto label_2b56a4;
        case 0x2b56b4u: goto label_2b56b4;
        case 0x2b56c4u: goto label_2b56c4;
        case 0x2b56d8u: goto label_2b56d8;
        case 0x2b56e4u: goto label_2b56e4;
        case 0x2b56f4u: goto label_2b56f4;
        case 0x2b5708u: goto label_2b5708;
        case 0x2b5718u: goto label_2b5718;
        case 0x2b5728u: goto label_2b5728;
        case 0x2b573cu: goto label_2b573c;
        case 0x2b5748u: goto label_2b5748;
        case 0x2b5758u: goto label_2b5758;
        case 0x2b576cu: goto label_2b576c;
        case 0x2b5790u: goto label_2b5790;
        case 0x2b57a0u: goto label_2b57a0;
        case 0x2b57b4u: goto label_2b57b4;
        case 0x2b57d0u: goto label_2b57d0;
        case 0x2b57e0u: goto label_2b57e0;
        case 0x2b57f4u: goto label_2b57f4;
        case 0x2b5808u: goto label_2b5808;
        case 0x2b5818u: goto label_2b5818;
        case 0x2b582cu: goto label_2b582c;
        case 0x2b5864u: goto label_2b5864;
        case 0x2b586cu: goto label_2b586c;
        case 0x2b5888u: goto label_2b5888;
        case 0x2b589cu: goto label_2b589c;
        case 0x2b58acu: goto label_2b58ac;
        case 0x2b58c8u: goto label_2b58c8;
        case 0x2b58d8u: goto label_2b58d8;
        case 0x2b591cu: goto label_2b591c;
        case 0x2b5928u: goto label_2b5928;
        case 0x2b5938u: goto label_2b5938;
        case 0x2b594cu: goto label_2b594c;
        case 0x2b595cu: goto label_2b595c;
        case 0x2b5964u: goto label_2b5964;
        case 0x2b5980u: goto label_2b5980;
        case 0x2b5994u: goto label_2b5994;
        case 0x2b59acu: goto label_2b59ac;
        case 0x2b59c8u: goto label_2b59c8;
        case 0x2b59e0u: goto label_2b59e0;
        case 0x2b59fcu: goto label_2b59fc;
        case 0x2b5a18u: goto label_2b5a18;
        case 0x2b5a34u: goto label_2b5a34;
        case 0x2b5a50u: goto label_2b5a50;
        case 0x2b5a5cu: goto label_2b5a5c;
        case 0x2b5a6cu: goto label_2b5a6c;
        case 0x2b5a80u: goto label_2b5a80;
        case 0x2b5ab0u: goto label_2b5ab0;
        case 0x2b5ac0u: goto label_2b5ac0;
        case 0x2b5ad4u: goto label_2b5ad4;
        case 0x2b5aecu: goto label_2b5aec;
        default: break;
    }

    ctx->pc = 0x2b5360u;

    // 0x2b5360: 0x27bdf960  addiu       $sp, $sp, -0x6A0
    ctx->pc = 0x2b5360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965600));
    // 0x2b5364: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b5364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b5368: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b5368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b536c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b5370: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b5370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b5374: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b5374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b5378: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b5378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b537c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5380: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5384: 0x8f849bc8  lw          $a0, -0x6438($gp)
    ctx->pc = 0x2b5384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b5388: 0x8484024c  lh          $a0, 0x24C($a0)
    ctx->pc = 0x2b5388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x2b538c: 0x148301d3  bne         $a0, $v1, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x2B538Cu;
    {
        const bool branch_taken_0x2b538c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B5390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B538Cu;
            // 0x2b5390: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b538c) {
            ctx->pc = 0x2B5ADCu;
            goto label_2b5adc;
        }
    }
    ctx->pc = 0x2B5394u;
    // 0x2b5394: 0xc08ad0c  jal         func_22B430
    ctx->pc = 0x2B5394u;
    SET_GPR_U32(ctx, 31, 0x2B539Cu);
    ctx->pc = 0x2B5398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5394u;
            // 0x2b5398: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B430u;
    if (runtime->hasFunction(0x22B430u)) {
        auto targetFn = runtime->lookupFunction(0x22B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B539Cu; }
        if (ctx->pc != 0x2B539Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormDraw__14CPosDataManageFv_0x22b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B539Cu; }
        if (ctx->pc != 0x2B539Cu) { return; }
    }
    ctx->pc = 0x2B539Cu;
label_2b539c:
    // 0x2b539c: 0x8f849584  lw          $a0, -0x6A7C($gp)
    ctx->pc = 0x2b539cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
    // 0x2b53a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B53A0u;
    {
        const bool branch_taken_0x2b53a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b53a0) {
            ctx->pc = 0x2B53B8u;
            goto label_2b53b8;
        }
    }
    ctx->pc = 0x2B53A8u;
    // 0x2b53a8: 0xc08b7d8  jal         func_22DF60
    ctx->pc = 0x2B53A8u;
    SET_GPR_U32(ctx, 31, 0x2B53B0u);
    ctx->pc = 0x22DF60u;
    if (runtime->hasFunction(0x22DF60u)) {
        auto targetFn = runtime->lookupFunction(0x22DF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B53B0u; }
        if (ctx->pc != 0x2B53B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CRepairManagerFv_0x22df60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B53B0u; }
        if (ctx->pc != 0x2B53B0u) { return; }
    }
    ctx->pc = 0x2B53B0u;
label_2b53b0:
    // 0x2b53b0: 0xc08b868  jal         func_22E1A0
    ctx->pc = 0x2B53B0u;
    SET_GPR_U32(ctx, 31, 0x2B53B8u);
    ctx->pc = 0x2B53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B53B0u;
            // 0x2b53b4: 0x8f849584  lw          $a0, -0x6A7C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940036)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E1A0u;
    if (runtime->hasFunction(0x22E1A0u)) {
        auto targetFn = runtime->lookupFunction(0x22E1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B53B8u; }
        if (ctx->pc != 0x2B53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CRepairManagerFv_0x22e1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B53B8u; }
        if (ctx->pc != 0x2B53B8u) { return; }
    }
    ctx->pc = 0x2B53B8u;
label_2b53b8:
    // 0x2b53b8: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x2b53b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2b53bc: 0x106001cb  beqz        $v1, . + 4 + (0x1CB << 2)
    ctx->pc = 0x2B53BCu;
    {
        const bool branch_taken_0x2b53bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B53C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B53BCu;
            // 0x2b53c0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b53bc) {
            ctx->pc = 0x2B5AECu;
            goto label_2b5aec;
        }
    }
    ctx->pc = 0x2B53C4u;
    // 0x2b53c4: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x2B53C4u;
    SET_GPR_U32(ctx, 31, 0x2B53CCu);
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B53CCu; }
        if (ctx->pc != 0x2B53CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B53CCu; }
        if (ctx->pc != 0x2B53CCu) { return; }
    }
    ctx->pc = 0x2B53CCu;
label_2b53cc:
    // 0x2b53cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b53ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b53d0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b53d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b53d4: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2b53d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2b53d8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2b53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2b53dc: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2B53DCu;
    SET_GPR_U32(ctx, 31, 0x2B53E4u);
    ctx->pc = 0x2B53E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B53DCu;
            // 0x2b53e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B53E4u; }
        if (ctx->pc != 0x2B53E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B53E4u; }
        if (ctx->pc != 0x2B53E4u) { return; }
    }
    ctx->pc = 0x2B53E4u;
label_2b53e4:
    // 0x2b53e4: 0x8f839bc8  lw          $v1, -0x6438($gp)
    ctx->pc = 0x2b53e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941640)));
    // 0x2b53e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b53ec: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x2b53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x2b53f0: 0x10620110  beq         $v1, $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x2B53F0u;
    {
        const bool branch_taken_0x2b53f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B53F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B53F0u;
            // 0x2b53f4: 0x3c03438c  lui         $v1, 0x438C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17292 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b53f0) {
            ctx->pc = 0x2B5834u;
            goto label_2b5834;
        }
    }
    ctx->pc = 0x2B53F8u;
    // 0x2b53f8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2b53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2b53fc: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2b53fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2b5400: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b5400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b5404: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2b5404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b5408: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2b5408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b540c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b540cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5410: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x2b5410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x2b5414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b5414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5418: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2b5418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2b541c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b541cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5420: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x2B5420u;
    SET_GPR_U32(ctx, 31, 0x2B5428u);
    ctx->pc = 0x2B5424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5420u;
            // 0x2b5424: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5428u; }
        if (ctx->pc != 0x2B5428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5428u; }
        if (ctx->pc != 0x2B5428u) { return; }
    }
    ctx->pc = 0x2B5428u;
label_2b5428:
    // 0x2b5428: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2b5428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2b542c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2b542cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2b5430: 0x24c6cd20  addiu       $a2, $a2, -0x32E0
    ctx->pc = 0x2b5430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954272));
    // 0x2b5434: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b5434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b5438:
    // 0x2b5438: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2b5438u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b543c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b543cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b5440: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2b5440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b5444: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2b5444u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2b5448: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b5448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b544c: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x2b544cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x2b5450: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B5450u;
    {
        const bool branch_taken_0x2b5450 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2B5454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5450u;
            // 0x2b5454: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5450) {
            ctx->pc = 0x2B5438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5438;
        }
    }
    ctx->pc = 0x2B5458u;
    // 0x2b5458: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2b5458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2b545c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2b545cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2b5460: 0x24c6cda0  addiu       $a2, $a2, -0x3260
    ctx->pc = 0x2b5460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954400));
    // 0x2b5464: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b5464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b5468:
    // 0x2b5468: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2b5468u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b546c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b546cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b5470: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2b5470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b5474: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2b5474u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2b5478: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b5478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b547c: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x2b547cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x2b5480: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B5480u;
    {
        const bool branch_taken_0x2b5480 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2B5484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5480u;
            // 0x2b5484: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5480) {
            ctx->pc = 0x2B5468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5468;
        }
    }
    ctx->pc = 0x2B5488u;
    // 0x2b5488: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2b5488u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2b548c: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x2b548cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2b5490: 0x24c6ce20  addiu       $a2, $a2, -0x31E0
    ctx->pc = 0x2b5490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954528));
    // 0x2b5494: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b5494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b5498:
    // 0x2b5498: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2b5498u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b549c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b549cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b54a0: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2b54a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b54a4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2b54a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2b54a8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b54a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b54ac: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x2b54acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x2b54b0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B54B0u;
    {
        const bool branch_taken_0x2b54b0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2B54B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B54B0u;
            // 0x2b54b4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54b0) {
            ctx->pc = 0x2B5498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5498;
        }
    }
    ctx->pc = 0x2B54B8u;
    // 0x2b54b8: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x2B54B8u;
    SET_GPR_U32(ctx, 31, 0x2B54C0u);
    ctx->pc = 0x2B54BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B54B8u;
            // 0x2b54bc: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B54C0u; }
        if (ctx->pc != 0x2B54C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B54C0u; }
        if (ctx->pc != 0x2B54C0u) { return; }
    }
    ctx->pc = 0x2B54C0u;
label_2b54c0:
    // 0x2b54c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b54c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54c4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b54c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2b54c8: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x2b54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x2b54cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b54ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54d0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b54d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2b54d4: 0x94314d92  lhu         $s1, 0x4D92($at)
    ctx->pc = 0x2b54d4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19858)));
    // 0x2b54d8: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x2b54d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x2b54dc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2b54dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2b54e0: 0x90324d94  lbu         $s2, 0x4D94($at)
    ctx->pc = 0x2b54e0u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19860)));
    // 0x2b54e4: 0x0  nop
    ctx->pc = 0x2b54e4u;
    // NOP
    // 0x2b54e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b54ec:
    // 0x2b54ec: 0x262a004  sllv        $s4, $v0, $s3
    ctx->pc = 0x2b54ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
    // 0x2b54f0: 0x2141024  and         $v0, $s0, $s4
    ctx->pc = 0x2b54f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x2b54f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B54F4u;
    {
        const bool branch_taken_0x2b54f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B54F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B54F4u;
            // 0x2b54f8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54f4) {
            ctx->pc = 0x2B5510u;
            goto label_2b5510;
        }
    }
    ctx->pc = 0x2B54FCu;
    // 0x2b54fc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2b54fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2b5500: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5500u;
    SET_GPR_U32(ctx, 31, 0x2B5508u);
    ctx->pc = 0x2B5504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5500u;
            // 0x2b5504: 0x24a5edd0  addiu       $a1, $a1, -0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5508u; }
        if (ctx->pc != 0x2B5508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5508u; }
        if (ctx->pc != 0x2B5508u) { return; }
    }
    ctx->pc = 0x2B5508u;
label_2b5508:
    // 0x2b5508: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5508u;
    {
        const bool branch_taken_0x2b5508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5508) {
            ctx->pc = 0x2B5520u;
            goto label_2b5520;
        }
    }
    ctx->pc = 0x2B5510u;
label_2b5510:
    // 0x2b5510: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5514: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2b5514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2b5518: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5518u;
    SET_GPR_U32(ctx, 31, 0x2B5520u);
    ctx->pc = 0x2B551Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5518u;
            // 0x2b551c: 0x24a5edd8  addiu       $a1, $a1, -0x1228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5520u; }
        if (ctx->pc != 0x2B5520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5520u; }
        if (ctx->pc != 0x2B5520u) { return; }
    }
    ctx->pc = 0x2B5520u;
label_2b5520:
    // 0x2b5520: 0x2341024  and         $v0, $s1, $s4
    ctx->pc = 0x2b5520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 20));
    // 0x2b5524: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5524u;
    {
        const bool branch_taken_0x2b5524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5524u;
            // 0x2b5528: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5524) {
            ctx->pc = 0x2B5540u;
            goto label_2b5540;
        }
    }
    ctx->pc = 0x2B552Cu;
    // 0x2b552c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2b552cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2b5530: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5530u;
    SET_GPR_U32(ctx, 31, 0x2B5538u);
    ctx->pc = 0x2B5534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5530u;
            // 0x2b5534: 0x24a5edd0  addiu       $a1, $a1, -0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5538u; }
        if (ctx->pc != 0x2B5538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5538u; }
        if (ctx->pc != 0x2B5538u) { return; }
    }
    ctx->pc = 0x2B5538u;
label_2b5538:
    // 0x2b5538: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5538u;
    {
        const bool branch_taken_0x2b5538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5538) {
            ctx->pc = 0x2B5550u;
            goto label_2b5550;
        }
    }
    ctx->pc = 0x2B5540u;
label_2b5540:
    // 0x2b5540: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5544: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2b5544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2b5548: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5548u;
    SET_GPR_U32(ctx, 31, 0x2B5550u);
    ctx->pc = 0x2B554Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5548u;
            // 0x2b554c: 0x24a5edd8  addiu       $a1, $a1, -0x1228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5550u; }
        if (ctx->pc != 0x2B5550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5550u; }
        if (ctx->pc != 0x2B5550u) { return; }
    }
    ctx->pc = 0x2B5550u;
label_2b5550:
    // 0x2b5550: 0x2541024  and         $v0, $s2, $s4
    ctx->pc = 0x2b5550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 20));
    // 0x2b5554: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5554u;
    {
        const bool branch_taken_0x2b5554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5554u;
            // 0x2b5558: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5554) {
            ctx->pc = 0x2B5570u;
            goto label_2b5570;
        }
    }
    ctx->pc = 0x2B555Cu;
    // 0x2b555c: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2b555cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2b5560: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5560u;
    SET_GPR_U32(ctx, 31, 0x2B5568u);
    ctx->pc = 0x2B5564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5560u;
            // 0x2b5564: 0x24a5edd0  addiu       $a1, $a1, -0x1230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5568u; }
        if (ctx->pc != 0x2B5568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5568u; }
        if (ctx->pc != 0x2B5568u) { return; }
    }
    ctx->pc = 0x2B5568u;
label_2b5568:
    // 0x2b5568: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5568u;
    {
        const bool branch_taken_0x2b5568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5568) {
            ctx->pc = 0x2B5580u;
            goto label_2b5580;
        }
    }
    ctx->pc = 0x2B5570u;
label_2b5570:
    // 0x2b5570: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5574: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2b5574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x2b5578: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5578u;
    SET_GPR_U32(ctx, 31, 0x2B5580u);
    ctx->pc = 0x2B557Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5578u;
            // 0x2b557c: 0x24a5edd8  addiu       $a1, $a1, -0x1228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5580u; }
        if (ctx->pc != 0x2B5580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5580u; }
        if (ctx->pc != 0x2B5580u) { return; }
    }
    ctx->pc = 0x2B5580u;
label_2b5580:
    // 0x2b5580: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b5580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b5584: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x2b5584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b5588: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2B5588u;
    {
        const bool branch_taken_0x2b5588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5588u;
            // 0x2b558c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5588) {
            ctx->pc = 0x2B54ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b54ec;
        }
    }
    ctx->pc = 0x2B5590u;
    // 0x2b5590: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2b5590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x2b5594: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x2b5594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2b5598: 0x24c64820  addiu       $a2, $a2, 0x4820
    ctx->pc = 0x2b5598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18464));
    // 0x2b559c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2b559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2b55a0:
    // 0x2b55a0: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2b55a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b55a4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b55a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b55a8: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2b55a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b55ac: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2b55acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2b55b0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b55b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b55b4: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x2b55b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x2b55b8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B55B8u;
    {
        const bool branch_taken_0x2b55b8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2B55BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B55B8u;
            // 0x2b55bc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b55b8) {
            ctx->pc = 0x2B55A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b55a0;
        }
    }
    ctx->pc = 0x2B55C0u;
    // 0x2b55c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b55c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b55c4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B55C4u;
    SET_GPR_U32(ctx, 31, 0x2B55CCu);
    ctx->pc = 0x2B55C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B55C4u;
            // 0x2b55c8: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B55CCu; }
        if (ctx->pc != 0x2B55CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B55CCu; }
        if (ctx->pc != 0x2B55CCu) { return; }
    }
    ctx->pc = 0x2B55CCu;
label_2b55cc:
    // 0x2b55cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b55ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b55d0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2b55d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b55d4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B55D4u;
    SET_GPR_U32(ctx, 31, 0x2B55DCu);
    ctx->pc = 0x2B55D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B55D4u;
            // 0x2b55d8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B55DCu; }
        if (ctx->pc != 0x2B55DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B55DCu; }
        if (ctx->pc != 0x2B55DCu) { return; }
    }
    ctx->pc = 0x2B55DCu;
label_2b55dc:
    // 0x2b55dc: 0x27b10104  addiu       $s1, $sp, 0x104
    ctx->pc = 0x2b55dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2b55e0: 0x27b00108  addiu       $s0, $sp, 0x108
    ctx->pc = 0x2b55e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2b55e4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b55e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b55e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b55e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b55ec: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b55ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b55f0: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B55F0u;
    SET_GPR_U32(ctx, 31, 0x2B55F8u);
    ctx->pc = 0x2B55F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B55F0u;
            // 0x2b55f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B55F8u; }
        if (ctx->pc != 0x2B55F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B55F8u; }
        if (ctx->pc != 0x2B55F8u) { return; }
    }
    ctx->pc = 0x2B55F8u;
label_2b55f8:
    // 0x2b55f8: 0x87839b94  lh          $v1, -0x646C($gp)
    ctx->pc = 0x2b55f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941588)));
    // 0x2b55fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b55fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5600: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5604: 0x24a5ede0  addiu       $a1, $a1, -0x1220
    ctx->pc = 0x2b5604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962656));
    // 0x2b5608: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2b5608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b560c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2b560cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b5610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b5614: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5614u;
    SET_GPR_U32(ctx, 31, 0x2B561Cu);
    ctx->pc = 0x2B5618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5614u;
            // 0x2b5618: 0x24520098  addiu       $s2, $v0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B561Cu; }
        if (ctx->pc != 0x2B561Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B561Cu; }
        if (ctx->pc != 0x2B561Cu) { return; }
    }
    ctx->pc = 0x2B561Cu;
label_2b561c:
    // 0x2b561c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b561cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5620: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5624: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B5624u;
    SET_GPR_U32(ctx, 31, 0x2B562Cu);
    ctx->pc = 0x2B5628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5624u;
            // 0x2b5628: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B562Cu; }
        if (ctx->pc != 0x2B562Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B562Cu; }
        if (ctx->pc != 0x2B562Cu) { return; }
    }
    ctx->pc = 0x2B562Cu;
label_2b562c:
    // 0x2b562c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b562cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5630: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5634: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b5634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5638: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B5638u;
    SET_GPR_U32(ctx, 31, 0x2B5640u);
    ctx->pc = 0x2B563Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5638u;
            // 0x2b563c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5640u; }
        if (ctx->pc != 0x2B5640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5640u; }
        if (ctx->pc != 0x2B5640u) { return; }
    }
    ctx->pc = 0x2B5640u;
label_2b5640:
    // 0x2b5640: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5644: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5648: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5648u;
    SET_GPR_U32(ctx, 31, 0x2B5650u);
    ctx->pc = 0x2B564Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5648u;
            // 0x2b564c: 0x24a5ede8  addiu       $a1, $a1, -0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5650u; }
        if (ctx->pc != 0x2B5650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5650u; }
        if (ctx->pc != 0x2B5650u) { return; }
    }
    ctx->pc = 0x2B5650u;
label_2b5650:
    // 0x2b5650: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5654: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x2b5654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2b5658: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B5658u;
    SET_GPR_U32(ctx, 31, 0x2B5660u);
    ctx->pc = 0x2B565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5658u;
            // 0x2b565c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5660u; }
        if (ctx->pc != 0x2B5660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5660u; }
        if (ctx->pc != 0x2B5660u) { return; }
    }
    ctx->pc = 0x2B5660u;
label_2b5660:
    // 0x2b5660: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b5660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5664: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5668: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b5668u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b566c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B566Cu;
    SET_GPR_U32(ctx, 31, 0x2B5674u);
    ctx->pc = 0x2B5670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B566Cu;
            // 0x2b5670: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5674u; }
        if (ctx->pc != 0x2B5674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5674u; }
        if (ctx->pc != 0x2B5674u) { return; }
    }
    ctx->pc = 0x2B5674u;
label_2b5674:
    // 0x2b5674: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5678: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5678u;
    SET_GPR_U32(ctx, 31, 0x2B5680u);
    ctx->pc = 0x2B567Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5678u;
            // 0x2b567c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5680u; }
        if (ctx->pc != 0x2B5680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5680u; }
        if (ctx->pc != 0x2B5680u) { return; }
    }
    ctx->pc = 0x2B5680u;
label_2b5680:
    // 0x2b5680: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5684: 0x24050098  addiu       $a1, $zero, 0x98
    ctx->pc = 0x2b5684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x2b5688: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B5688u;
    SET_GPR_U32(ctx, 31, 0x2B5690u);
    ctx->pc = 0x2B568Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5688u;
            // 0x2b568c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5690u; }
        if (ctx->pc != 0x2B5690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5690u; }
        if (ctx->pc != 0x2B5690u) { return; }
    }
    ctx->pc = 0x2B5690u;
label_2b5690:
    // 0x2b5690: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b5690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5694: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5698: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b5698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b569c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B569Cu;
    SET_GPR_U32(ctx, 31, 0x2B56A4u);
    ctx->pc = 0x2B56A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B569Cu;
            // 0x2b56a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56A4u; }
        if (ctx->pc != 0x2B56A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56A4u; }
        if (ctx->pc != 0x2B56A4u) { return; }
    }
    ctx->pc = 0x2B56A4u;
label_2b56a4:
    // 0x2b56a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b56a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b56a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b56a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b56ac: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B56ACu;
    SET_GPR_U32(ctx, 31, 0x2B56B4u);
    ctx->pc = 0x2B56B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56ACu;
            // 0x2b56b0: 0x24a5edf0  addiu       $a1, $a1, -0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56B4u; }
        if (ctx->pc != 0x2B56B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56B4u; }
        if (ctx->pc != 0x2B56B4u) { return; }
    }
    ctx->pc = 0x2B56B4u;
label_2b56b4:
    // 0x2b56b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b56b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b56b8: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x2b56b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2b56bc: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B56BCu;
    SET_GPR_U32(ctx, 31, 0x2B56C4u);
    ctx->pc = 0x2B56C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56BCu;
            // 0x2b56c0: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56C4u; }
        if (ctx->pc != 0x2B56C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56C4u; }
        if (ctx->pc != 0x2B56C4u) { return; }
    }
    ctx->pc = 0x2B56C4u;
label_2b56c4:
    // 0x2b56c4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b56c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b56c8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b56c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b56cc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b56ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b56d0: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B56D0u;
    SET_GPR_U32(ctx, 31, 0x2B56D8u);
    ctx->pc = 0x2B56D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56D0u;
            // 0x2b56d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56D8u; }
        if (ctx->pc != 0x2B56D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56D8u; }
        if (ctx->pc != 0x2B56D8u) { return; }
    }
    ctx->pc = 0x2B56D8u;
label_2b56d8:
    // 0x2b56d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b56d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b56dc: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B56DCu;
    SET_GPR_U32(ctx, 31, 0x2B56E4u);
    ctx->pc = 0x2B56E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56DCu;
            // 0x2b56e0: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56E4u; }
        if (ctx->pc != 0x2B56E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56E4u; }
        if (ctx->pc != 0x2B56E4u) { return; }
    }
    ctx->pc = 0x2B56E4u;
label_2b56e4:
    // 0x2b56e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b56e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b56e8: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x2b56e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2b56ec: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B56ECu;
    SET_GPR_U32(ctx, 31, 0x2B56F4u);
    ctx->pc = 0x2B56F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B56ECu;
            // 0x2b56f0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56F4u; }
        if (ctx->pc != 0x2B56F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B56F4u; }
        if (ctx->pc != 0x2B56F4u) { return; }
    }
    ctx->pc = 0x2B56F4u;
label_2b56f4:
    // 0x2b56f4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b56f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b56f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b56f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b56fc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b56fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5700: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B5700u;
    SET_GPR_U32(ctx, 31, 0x2B5708u);
    ctx->pc = 0x2B5704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5700u;
            // 0x2b5704: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5708u; }
        if (ctx->pc != 0x2B5708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5708u; }
        if (ctx->pc != 0x2B5708u) { return; }
    }
    ctx->pc = 0x2B5708u;
label_2b5708:
    // 0x2b5708: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b570c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5710: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5710u;
    SET_GPR_U32(ctx, 31, 0x2B5718u);
    ctx->pc = 0x2B5714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5710u;
            // 0x2b5714: 0x24a5edf8  addiu       $a1, $a1, -0x1208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5718u; }
        if (ctx->pc != 0x2B5718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5718u; }
        if (ctx->pc != 0x2B5718u) { return; }
    }
    ctx->pc = 0x2B5718u;
label_2b5718:
    // 0x2b5718: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b571c: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x2b571cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b5720: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B5720u;
    SET_GPR_U32(ctx, 31, 0x2B5728u);
    ctx->pc = 0x2B5724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5720u;
            // 0x2b5724: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5728u; }
        if (ctx->pc != 0x2B5728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5728u; }
        if (ctx->pc != 0x2B5728u) { return; }
    }
    ctx->pc = 0x2B5728u;
label_2b5728:
    // 0x2b5728: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b5728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b572c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b572cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5730: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b5730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5734: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B5734u;
    SET_GPR_U32(ctx, 31, 0x2B573Cu);
    ctx->pc = 0x2B5738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5734u;
            // 0x2b5738: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B573Cu; }
        if (ctx->pc != 0x2B573Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B573Cu; }
        if (ctx->pc != 0x2B573Cu) { return; }
    }
    ctx->pc = 0x2B573Cu;
label_2b573c:
    // 0x2b573c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5740: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5740u;
    SET_GPR_U32(ctx, 31, 0x2B5748u);
    ctx->pc = 0x2B5744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5740u;
            // 0x2b5744: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5748u; }
        if (ctx->pc != 0x2B5748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5748u; }
        if (ctx->pc != 0x2B5748u) { return; }
    }
    ctx->pc = 0x2B5748u;
label_2b5748:
    // 0x2b5748: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b574c: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x2b574cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b5750: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B5750u;
    SET_GPR_U32(ctx, 31, 0x2B5758u);
    ctx->pc = 0x2B5754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5750u;
            // 0x2b5754: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5758u; }
        if (ctx->pc != 0x2B5758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5758u; }
        if (ctx->pc != 0x2B5758u) { return; }
    }
    ctx->pc = 0x2B5758u;
label_2b5758:
    // 0x2b5758: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b5758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b575c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5760: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b5760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5764: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B5764u;
    SET_GPR_U32(ctx, 31, 0x2B576Cu);
    ctx->pc = 0x2B5768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5764u;
            // 0x2b5768: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B576Cu; }
        if (ctx->pc != 0x2B576Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B576Cu; }
        if (ctx->pc != 0x2B576Cu) { return; }
    }
    ctx->pc = 0x2B576Cu;
label_2b576c:
    // 0x2b576c: 0x87839b98  lh          $v1, -0x6468($gp)
    ctx->pc = 0x2b576cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941592)));
    // 0x2b5770: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5774: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5778: 0x24a5ee00  addiu       $a1, $a1, -0x1200
    ctx->pc = 0x2b5778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
    // 0x2b577c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b577cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b5780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5784: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b5784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b5788: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5788u;
    SET_GPR_U32(ctx, 31, 0x2B5790u);
    ctx->pc = 0x2B578Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5788u;
            // 0x2b578c: 0x2452003c  addiu       $s2, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5790u; }
        if (ctx->pc != 0x2B5790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5790u; }
        if (ctx->pc != 0x2B5790u) { return; }
    }
    ctx->pc = 0x2B5790u;
label_2b5790:
    // 0x2b5790: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b5790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5794: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5798: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B5798u;
    SET_GPR_U32(ctx, 31, 0x2B57A0u);
    ctx->pc = 0x2B579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5798u;
            // 0x2b579c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57A0u; }
        if (ctx->pc != 0x2B57A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57A0u; }
        if (ctx->pc != 0x2B57A0u) { return; }
    }
    ctx->pc = 0x2B57A0u;
label_2b57a0:
    // 0x2b57a0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b57a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b57a4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b57a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b57a8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b57a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b57ac: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B57ACu;
    SET_GPR_U32(ctx, 31, 0x2B57B4u);
    ctx->pc = 0x2B57B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B57ACu;
            // 0x2b57b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57B4u; }
        if (ctx->pc != 0x2B57B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57B4u; }
        if (ctx->pc != 0x2B57B4u) { return; }
    }
    ctx->pc = 0x2B57B4u;
label_2b57b4:
    // 0x2b57b4: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2b57b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2b57b8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B57B8u;
    {
        const bool branch_taken_0x2b57b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B57BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B57B8u;
            // 0x2b57bc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57b8) {
            ctx->pc = 0x2B57FCu;
            goto label_2b57fc;
        }
    }
    ctx->pc = 0x2B57C0u;
    // 0x2b57c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b57c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b57c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b57c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b57c8: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B57C8u;
    SET_GPR_U32(ctx, 31, 0x2B57D0u);
    ctx->pc = 0x2B57CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B57C8u;
            // 0x2b57cc: 0x24a5ee10  addiu       $a1, $a1, -0x11F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57D0u; }
        if (ctx->pc != 0x2B57D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57D0u; }
        if (ctx->pc != 0x2B57D0u) { return; }
    }
    ctx->pc = 0x2B57D0u;
label_2b57d0:
    // 0x2b57d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b57d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b57d4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2b57d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b57d8: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B57D8u;
    SET_GPR_U32(ctx, 31, 0x2B57E0u);
    ctx->pc = 0x2B57DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B57D8u;
            // 0x2b57dc: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57E0u; }
        if (ctx->pc != 0x2B57E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57E0u; }
        if (ctx->pc != 0x2B57E0u) { return; }
    }
    ctx->pc = 0x2B57E0u;
label_2b57e0:
    // 0x2b57e0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b57e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b57e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b57e8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b57e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b57ec: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B57ECu;
    SET_GPR_U32(ctx, 31, 0x2B57F4u);
    ctx->pc = 0x2B57F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B57ECu;
            // 0x2b57f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57F4u; }
        if (ctx->pc != 0x2B57F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B57F4u; }
        if (ctx->pc != 0x2B57F4u) { return; }
    }
    ctx->pc = 0x2B57F4u;
label_2b57f4:
    // 0x2b57f4: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x2B57F4u;
    {
        const bool branch_taken_0x2b57f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B57F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B57F4u;
            // 0x2b57f8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b57f4) {
            ctx->pc = 0x2B5AF0u;
            goto label_2b5af0;
        }
    }
    ctx->pc = 0x2B57FCu;
label_2b57fc:
    // 0x2b57fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b57fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5800: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5800u;
    SET_GPR_U32(ctx, 31, 0x2B5808u);
    ctx->pc = 0x2B5804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5800u;
            // 0x2b5804: 0x24a5ee60  addiu       $a1, $a1, -0x11A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5808u; }
        if (ctx->pc != 0x2B5808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5808u; }
        if (ctx->pc != 0x2B5808u) { return; }
    }
    ctx->pc = 0x2B5808u;
label_2b5808:
    // 0x2b5808: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b580c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2b580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b5810: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B5810u;
    SET_GPR_U32(ctx, 31, 0x2B5818u);
    ctx->pc = 0x2B5814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5810u;
            // 0x2b5814: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5818u; }
        if (ctx->pc != 0x2B5818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5818u; }
        if (ctx->pc != 0x2B5818u) { return; }
    }
    ctx->pc = 0x2B5818u;
label_2b5818:
    // 0x2b5818: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b5818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b581c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5820: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b5820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5824: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B5824u;
    SET_GPR_U32(ctx, 31, 0x2B582Cu);
    ctx->pc = 0x2B5828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5824u;
            // 0x2b5828: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B582Cu; }
        if (ctx->pc != 0x2B582Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B582Cu; }
        if (ctx->pc != 0x2B582Cu) { return; }
    }
    ctx->pc = 0x2B582Cu;
label_2b582c:
    // 0x2b582c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2B582Cu;
    {
        const bool branch_taken_0x2b582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b582c) {
            ctx->pc = 0x2B5AECu;
            goto label_2b5aec;
        }
    }
    ctx->pc = 0x2B5834u;
label_2b5834:
    // 0x2b5834: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2b5834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2b5838: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2b5838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b583c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2b583cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2b5840: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2b5840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2b5844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b5844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5848: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b5848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b584c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b584cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5850: 0x3c0241d0  lui         $v0, 0x41D0
    ctx->pc = 0x2b5850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16848 << 16));
    // 0x2b5854: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2b5854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b5858: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b5858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b585c: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x2B585Cu;
    SET_GPR_U32(ctx, 31, 0x2B5864u);
    ctx->pc = 0x2B5860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B585Cu;
            // 0x2b5860: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5864u; }
        if (ctx->pc != 0x2B5864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5864u; }
        if (ctx->pc != 0x2B5864u) { return; }
    }
    ctx->pc = 0x2B5864u;
label_2b5864:
    // 0x2b5864: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2B5864u;
    SET_GPR_U32(ctx, 31, 0x2B586Cu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B586Cu; }
        if (ctx->pc != 0x2B586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B586Cu; }
        if (ctx->pc != 0x2B586Cu) { return; }
    }
    ctx->pc = 0x2B586Cu;
label_2b586c:
    // 0x2b586c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b586cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b5870: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2b5870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2b5874: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2b5874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x2b5878: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b5878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b587c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2b587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2b5880: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2B5880u;
    SET_GPR_U32(ctx, 31, 0x2B5888u);
    ctx->pc = 0x2B5884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5880u;
            // 0x2b5884: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5888u; }
        if (ctx->pc != 0x2B5888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5888u; }
        if (ctx->pc != 0x2B5888u) { return; }
    }
    ctx->pc = 0x2B5888u;
label_2b5888:
    // 0x2b5888: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b588c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b588cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5890: 0x24a5eeb0  addiu       $a1, $a1, -0x1150
    ctx->pc = 0x2b5890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962864));
    // 0x2b5894: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5894u;
    SET_GPR_U32(ctx, 31, 0x2B589Cu);
    ctx->pc = 0x2B5898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5894u;
            // 0x2b5898: 0x24130046  addiu       $s3, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B589Cu; }
        if (ctx->pc != 0x2B589Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B589Cu; }
        if (ctx->pc != 0x2B589Cu) { return; }
    }
    ctx->pc = 0x2B589Cu;
label_2b589c:
    // 0x2b589c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b58a0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b58a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b58a4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B58A4u;
    SET_GPR_U32(ctx, 31, 0x2B58ACu);
    ctx->pc = 0x2B58A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58A4u;
            // 0x2b58a8: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B58ACu; }
        if (ctx->pc != 0x2B58ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B58ACu; }
        if (ctx->pc != 0x2B58ACu) { return; }
    }
    ctx->pc = 0x2B58ACu;
label_2b58ac:
    // 0x2b58ac: 0x27b10104  addiu       $s1, $sp, 0x104
    ctx->pc = 0x2b58acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x2b58b0: 0x27b00108  addiu       $s0, $sp, 0x108
    ctx->pc = 0x2b58b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x2b58b4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b58b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b58b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b58b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b58bc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b58bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b58c0: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B58C0u;
    SET_GPR_U32(ctx, 31, 0x2B58C8u);
    ctx->pc = 0x2B58C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58C0u;
            // 0x2b58c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B58C8u; }
        if (ctx->pc != 0x2B58C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B58C8u; }
        if (ctx->pc != 0x2B58C8u) { return; }
    }
    ctx->pc = 0x2B58C8u;
label_2b58c8:
    // 0x2b58c8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2b58c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x2b58cc: 0x27a504a0  addiu       $a1, $sp, 0x4A0
    ctx->pc = 0x2b58ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    // 0x2b58d0: 0x24c64a20  addiu       $a2, $a2, 0x4A20
    ctx->pc = 0x2b58d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18976));
    // 0x2b58d4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2b58d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b58d8:
    // 0x2b58d8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2b58d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b58dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2b58dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b58e0: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2b58e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b58e4: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2b58e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2b58e8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b58e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2b58ec: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x2b58ecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x2b58f0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B58F0u;
    {
        const bool branch_taken_0x2b58f0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2B58F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B58F0u;
            // 0x2b58f4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58f0) {
            ctx->pc = 0x2B58D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b58d8;
        }
    }
    ctx->pc = 0x2B58F8u;
    // 0x2b58f8: 0x83839b90  lb          $v1, -0x6470($gp)
    ctx->pc = 0x2b58f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941584)));
    // 0x2b58fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b58fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5900: 0x24a5eed0  addiu       $a1, $a1, -0x1130
    ctx->pc = 0x2b5900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962896));
    // 0x2b5904: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2b5904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b5908: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b590c: 0x24420011  addiu       $v0, $v0, 0x11
    ctx->pc = 0x2b590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    // 0x2b5910: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b5910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2b5914: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2B5914u;
    SET_GPR_U32(ctx, 31, 0x2B591Cu);
    ctx->pc = 0x2B5918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5914u;
            // 0x2b5918: 0x244404a0  addiu       $a0, $v0, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B591Cu; }
        if (ctx->pc != 0x2B591Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B591Cu; }
        if (ctx->pc != 0x2B591Cu) { return; }
    }
    ctx->pc = 0x2B591Cu;
label_2b591c:
    // 0x2b591c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b591cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5920: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5920u;
    SET_GPR_U32(ctx, 31, 0x2B5928u);
    ctx->pc = 0x2B5924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5920u;
            // 0x2b5924: 0x27a504a0  addiu       $a1, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5928u; }
        if (ctx->pc != 0x2B5928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5928u; }
        if (ctx->pc != 0x2B5928u) { return; }
    }
    ctx->pc = 0x2B5928u;
label_2b5928:
    // 0x2b5928: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b592c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b592cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5930: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B5930u;
    SET_GPR_U32(ctx, 31, 0x2B5938u);
    ctx->pc = 0x2B5934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5930u;
            // 0x2b5934: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5938u; }
        if (ctx->pc != 0x2B5938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5938u; }
        if (ctx->pc != 0x2B5938u) { return; }
    }
    ctx->pc = 0x2B5938u;
label_2b5938:
    // 0x2b5938: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b5938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b593c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b593cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5940: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b5940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5944: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B5944u;
    SET_GPR_U32(ctx, 31, 0x2B594Cu);
    ctx->pc = 0x2B5948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5944u;
            // 0x2b5948: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B594Cu; }
        if (ctx->pc != 0x2B594Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B594Cu; }
        if (ctx->pc != 0x2B594Cu) { return; }
    }
    ctx->pc = 0x2B594Cu;
label_2b594c:
    // 0x2b594c: 0x83949b8c  lb          $s4, -0x6474($gp)
    ctx->pc = 0x2b594cu;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941580)));
    // 0x2b5950: 0x2a8100b3  slti        $at, $s4, 0xB3
    ctx->pc = 0x2b5950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)179) ? 1 : 0);
    // 0x2b5954: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x2B5954u;
    {
        const bool branch_taken_0x2b5954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5954) {
            ctx->pc = 0x2B5AA0u;
            goto label_2b5aa0;
        }
    }
    ctx->pc = 0x2B595Cu;
label_2b595c:
    // 0x2b595c: 0xc0aad44  jal         func_2AB510
    ctx->pc = 0x2B595Cu;
    SET_GPR_U32(ctx, 31, 0x2B5964u);
    ctx->pc = 0x2B5960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B595Cu;
            // 0x2b5960: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB510u;
    if (runtime->hasFunction(0x2AB510u)) {
        auto targetFn = runtime->lookupFunction(0x2AB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5964u; }
        if (ctx->pc != 0x2B5964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyNPCData__Fi_0x2ab510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5964u; }
        if (ctx->pc != 0x2B5964u) { return; }
    }
    ctx->pc = 0x2B5964u;
label_2b5964:
    // 0x2b5964: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2B5964u;
    {
        const bool branch_taken_0x2b5964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5964) {
            ctx->pc = 0x2B5A90u;
            goto label_2b5a90;
        }
    }
    ctx->pc = 0x2B596Cu;
    // 0x2b596c: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x2b596cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b5970: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2B5970u;
    {
        const bool branch_taken_0x2b5970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5970u;
            // 0x2b5974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5970) {
            ctx->pc = 0x2B5A90u;
            goto label_2b5a90;
        }
    }
    ctx->pc = 0x2B5978u;
    // 0x2b5978: 0xc067278  jal         func_19C9E0
    ctx->pc = 0x2B5978u;
    SET_GPR_U32(ctx, 31, 0x2B5980u);
    ctx->pc = 0x2B597Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5978u;
            // 0x2b597c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E0u;
    if (runtime->hasFunction(0x19C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5980u; }
        if (ctx->pc != 0x2B5980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaInfo__16CUserDataManagerFi_0x19c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5980u; }
        if (ctx->pc != 0x2B5980u) { return; }
    }
    ctx->pc = 0x2B5980u;
label_2b5980:
    // 0x2b5980: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b5980u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5984: 0x12a00042  beqz        $s5, . + 4 + (0x42 << 2)
    ctx->pc = 0x2B5984u;
    {
        const bool branch_taken_0x2b5984 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5984u;
            // 0x2b5988: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5984) {
            ctx->pc = 0x2B5A90u;
            goto label_2b5a90;
        }
    }
    ctx->pc = 0x2B598Cu;
    // 0x2b598c: 0xc0aacf4  jal         func_2AB3D0
    ctx->pc = 0x2B598Cu;
    SET_GPR_U32(ctx, 31, 0x2B5994u);
    ctx->pc = 0x2AB3D0u;
    if (runtime->hasFunction(0x2AB3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5994u; }
        if (ctx->pc != 0x2B5994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNPCName__Fi_0x2ab3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5994u; }
        if (ctx->pc != 0x2B5994u) { return; }
    }
    ctx->pc = 0x2B5994u;
label_2b5994:
    // 0x2b5994: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B5994u;
    {
        const bool branch_taken_0x2b5994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5994u;
            // 0x2b5998: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5994) {
            ctx->pc = 0x2B5A90u;
            goto label_2b5a90;
        }
    }
    ctx->pc = 0x2B599Cu;
    // 0x2b599c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b599cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b59a0: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x2b59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x2b59a4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B59A4u;
    SET_GPR_U32(ctx, 31, 0x2B59ACu);
    ctx->pc = 0x2B59A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59A4u;
            // 0x2b59a8: 0x24a5eed8  addiu       $a1, $a1, -0x1128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59ACu; }
        if (ctx->pc != 0x2B59ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59ACu; }
        if (ctx->pc != 0x2B59ACu) { return; }
    }
    ctx->pc = 0x2B59ACu;
label_2b59ac:
    // 0x2b59ac: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x2b59acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2b59b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b59b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b59b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B59B4u;
    {
        const bool branch_taken_0x2b59b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59B4u;
            // 0x2b59b8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59b4) {
            ctx->pc = 0x2B59D0u;
            goto label_2b59d0;
        }
    }
    ctx->pc = 0x2B59BCu;
    // 0x2b59bc: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x2b59bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x2b59c0: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B59C0u;
    SET_GPR_U32(ctx, 31, 0x2B59C8u);
    ctx->pc = 0x2B59C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59C0u;
            // 0x2b59c4: 0x24a5eee0  addiu       $a1, $a1, -0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59C8u; }
        if (ctx->pc != 0x2B59C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59C8u; }
        if (ctx->pc != 0x2B59C8u) { return; }
    }
    ctx->pc = 0x2B59C8u;
label_2b59c8:
    // 0x2b59c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B59C8u;
    {
        const bool branch_taken_0x2b59c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b59c8) {
            ctx->pc = 0x2B59E0u;
            goto label_2b59e0;
        }
    }
    ctx->pc = 0x2B59D0u;
label_2b59d0:
    // 0x2b59d0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b59d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b59d4: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x2b59d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x2b59d8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B59D8u;
    SET_GPR_U32(ctx, 31, 0x2B59E0u);
    ctx->pc = 0x2B59DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59D8u;
            // 0x2b59dc: 0x24a5eee8  addiu       $a1, $a1, -0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59E0u; }
        if (ctx->pc != 0x2B59E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59E0u; }
        if (ctx->pc != 0x2B59E0u) { return; }
    }
    ctx->pc = 0x2B59E0u;
label_2b59e0:
    // 0x2b59e0: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x2b59e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2b59e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b59e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b59e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B59E8u;
    {
        const bool branch_taken_0x2b59e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59E8u;
            // 0x2b59ec: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59e8) {
            ctx->pc = 0x2B5A04u;
            goto label_2b5a04;
        }
    }
    ctx->pc = 0x2B59F0u;
    // 0x2b59f0: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x2b59f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x2b59f4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B59F4u;
    SET_GPR_U32(ctx, 31, 0x2B59FCu);
    ctx->pc = 0x2B59F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B59F4u;
            // 0x2b59f8: 0x24a5eee0  addiu       $a1, $a1, -0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59FCu; }
        if (ctx->pc != 0x2B59FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B59FCu; }
        if (ctx->pc != 0x2B59FCu) { return; }
    }
    ctx->pc = 0x2B59FCu;
label_2b59fc:
    // 0x2b59fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B59FCu;
    {
        const bool branch_taken_0x2b59fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b59fc) {
            ctx->pc = 0x2B5A18u;
            goto label_2b5a18;
        }
    }
    ctx->pc = 0x2B5A04u;
label_2b5a04:
    // 0x2b5a04: 0x0  nop
    ctx->pc = 0x2b5a04u;
    // NOP
    // 0x2b5a08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5a0c: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x2b5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x2b5a10: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5A10u;
    SET_GPR_U32(ctx, 31, 0x2B5A18u);
    ctx->pc = 0x2B5A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A10u;
            // 0x2b5a14: 0x24a5eee8  addiu       $a1, $a1, -0x1118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A18u; }
        if (ctx->pc != 0x2B5A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A18u; }
        if (ctx->pc != 0x2B5A18u) { return; }
    }
    ctx->pc = 0x2B5A18u;
label_2b5a18:
    // 0x2b5a18: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x2b5a18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2b5a1c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2b5a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2b5a20: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5A20u;
    {
        const bool branch_taken_0x2b5a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A20u;
            // 0x2b5a24: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a20) {
            ctx->pc = 0x2B5A3Cu;
            goto label_2b5a3c;
        }
    }
    ctx->pc = 0x2B5A28u;
    // 0x2b5a28: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x2b5a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x2b5a2c: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5A2Cu;
    SET_GPR_U32(ctx, 31, 0x2B5A34u);
    ctx->pc = 0x2B5A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A2Cu;
            // 0x2b5a30: 0x24a5eef0  addiu       $a1, $a1, -0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A34u; }
        if (ctx->pc != 0x2B5A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A34u; }
        if (ctx->pc != 0x2B5A34u) { return; }
    }
    ctx->pc = 0x2B5A34u;
label_2b5a34:
    // 0x2b5a34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5A34u;
    {
        const bool branch_taken_0x2b5a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5a34) {
            ctx->pc = 0x2B5A50u;
            goto label_2b5a50;
        }
    }
    ctx->pc = 0x2B5A3Cu;
label_2b5a3c:
    // 0x2b5a3c: 0x0  nop
    ctx->pc = 0x2b5a3cu;
    // NOP
    // 0x2b5a40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5a44: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x2b5a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x2b5a48: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x2B5A48u;
    SET_GPR_U32(ctx, 31, 0x2B5A50u);
    ctx->pc = 0x2B5A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A48u;
            // 0x2b5a4c: 0x24a5eef8  addiu       $a1, $a1, -0x1108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A50u; }
        if (ctx->pc != 0x2B5A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A50u; }
        if (ctx->pc != 0x2B5A50u) { return; }
    }
    ctx->pc = 0x2B5A50u;
label_2b5a50:
    // 0x2b5a50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5a54: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5A54u;
    SET_GPR_U32(ctx, 31, 0x2B5A5Cu);
    ctx->pc = 0x2B5A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A54u;
            // 0x2b5a58: 0x27a505a0  addiu       $a1, $sp, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A5Cu; }
        if (ctx->pc != 0x2B5A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A5Cu; }
        if (ctx->pc != 0x2B5A5Cu) { return; }
    }
    ctx->pc = 0x2B5A5Cu;
label_2b5a5c:
    // 0x2b5a5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5a60: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2b5a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2b5a64: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B5A64u;
    SET_GPR_U32(ctx, 31, 0x2B5A6Cu);
    ctx->pc = 0x2B5A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A64u;
            // 0x2b5a68: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A6Cu; }
        if (ctx->pc != 0x2B5A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A6Cu; }
        if (ctx->pc != 0x2B5A6Cu) { return; }
    }
    ctx->pc = 0x2B5A6Cu;
label_2b5a6c:
    // 0x2b5a6c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b5a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5a70: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5a74: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b5a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5a78: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B5A78u;
    SET_GPR_U32(ctx, 31, 0x2B5A80u);
    ctx->pc = 0x2B5A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A78u;
            // 0x2b5a7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A80u; }
        if (ctx->pc != 0x2B5A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A80u; }
        if (ctx->pc != 0x2B5A80u) { return; }
    }
    ctx->pc = 0x2B5A80u;
label_2b5a80:
    // 0x2b5a80: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x2b5a80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2b5a84: 0x2a610137  slti        $at, $s3, 0x137
    ctx->pc = 0x2b5a84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)311) ? 1 : 0);
    // 0x2b5a88: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5A88u;
    {
        const bool branch_taken_0x2b5a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5a88) {
            ctx->pc = 0x2B5AA0u;
            goto label_2b5aa0;
        }
    }
    ctx->pc = 0x2B5A90u;
label_2b5a90:
    // 0x2b5a90: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b5a90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b5a94: 0x2a8200b3  slti        $v0, $s4, 0xB3
    ctx->pc = 0x2b5a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)179) ? 1 : 0);
    // 0x2b5a98: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x2B5A98u;
    {
        const bool branch_taken_0x2b5a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5a98) {
            ctx->pc = 0x2B595Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b595c;
        }
    }
    ctx->pc = 0x2B5AA0u;
label_2b5aa0:
    // 0x2b5aa0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b5aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b5aa4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5aa8: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2B5AA8u;
    SET_GPR_U32(ctx, 31, 0x2B5AB0u);
    ctx->pc = 0x2B5AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5AA8u;
            // 0x2b5aac: 0x24a5ee00  addiu       $a1, $a1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AB0u; }
        if (ctx->pc != 0x2B5AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AB0u; }
        if (ctx->pc != 0x2B5AB0u) { return; }
    }
    ctx->pc = 0x2B5AB0u;
label_2b5ab0:
    // 0x2b5ab0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5ab4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b5ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5ab8: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2B5AB8u;
    SET_GPR_U32(ctx, 31, 0x2B5AC0u);
    ctx->pc = 0x2B5ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5AB8u;
            // 0x2b5abc: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AC0u; }
        if (ctx->pc != 0x2B5AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AC0u; }
        if (ctx->pc != 0x2B5AC0u) { return; }
    }
    ctx->pc = 0x2B5AC0u;
label_2b5ac0:
    // 0x2b5ac0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2b5ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b5ac4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b5ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b5ac8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b5ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5acc: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2B5ACCu;
    SET_GPR_U32(ctx, 31, 0x2B5AD4u);
    ctx->pc = 0x2B5AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5ACCu;
            // 0x2b5ad0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AD4u; }
        if (ctx->pc != 0x2B5AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AD4u; }
        if (ctx->pc != 0x2B5AD4u) { return; }
    }
    ctx->pc = 0x2B5AD4u;
label_2b5ad4:
    // 0x2b5ad4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5AD4u;
    {
        const bool branch_taken_0x2b5ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ad4) {
            ctx->pc = 0x2B5AECu;
            goto label_2b5aec;
        }
    }
    ctx->pc = 0x2B5ADCu;
label_2b5adc:
    // 0x2b5adc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5ADCu;
    {
        const bool branch_taken_0x2b5adc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5adc) {
            ctx->pc = 0x2B5AECu;
            goto label_2b5aec;
        }
    }
    ctx->pc = 0x2B5AE4u;
    // 0x2b5ae4: 0xc0ae344  jal         func_2B8D10
    ctx->pc = 0x2B5AE4u;
    SET_GPR_U32(ctx, 31, 0x2B5AECu);
    ctx->pc = 0x2B8D10u;
    if (runtime->hasFunction(0x2B8D10u)) {
        auto targetFn = runtime->lookupFunction(0x2B8D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AECu; }
        if (ctx->pc != 0x2B5AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterBoxDraw__Fv_0x2b8d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AECu; }
        if (ctx->pc != 0x2B5AECu) { return; }
    }
    ctx->pc = 0x2B5AECu;
label_2b5aec:
    // 0x2b5aec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b5aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b5af0:
    // 0x2b5af0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b5af0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5af4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b5af4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5af8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b5af8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5afc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b5afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B08u;
            // 0x2b5b0c: 0x27bd06a0  addiu       $sp, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5B10u;
}
