#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuLocalLoop__15CMenuChrCngMenuFv
// Address: 0x2b4080 - 0x2b4554
void MenuLocalLoop__15CMenuChrCngMenuFv_0x2b4080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuLocalLoop__15CMenuChrCngMenuFv_0x2b4080");
#endif

    switch (ctx->pc) {
        case 0x2b40a0u: goto label_2b40a0;
        case 0x2b40dcu: goto label_2b40dc;
        case 0x2b411cu: goto label_2b411c;
        case 0x2b4130u: goto label_2b4130;
        case 0x2b4154u: goto label_2b4154;
        case 0x2b4170u: goto label_2b4170;
        case 0x2b4180u: goto label_2b4180;
        case 0x2b41a8u: goto label_2b41a8;
        case 0x2b41e0u: goto label_2b41e0;
        case 0x2b41ecu: goto label_2b41ec;
        case 0x2b41f8u: goto label_2b41f8;
        case 0x2b4224u: goto label_2b4224;
        case 0x2b4240u: goto label_2b4240;
        case 0x2b4294u: goto label_2b4294;
        case 0x2b42b8u: goto label_2b42b8;
        case 0x2b42d4u: goto label_2b42d4;
        case 0x2b42e0u: goto label_2b42e0;
        case 0x2b4300u: goto label_2b4300;
        case 0x2b4320u: goto label_2b4320;
        case 0x2b4364u: goto label_2b4364;
        case 0x2b436cu: goto label_2b436c;
        case 0x2b4378u: goto label_2b4378;
        case 0x2b4380u: goto label_2b4380;
        case 0x2b43acu: goto label_2b43ac;
        case 0x2b43c0u: goto label_2b43c0;
        case 0x2b43f8u: goto label_2b43f8;
        case 0x2b4420u: goto label_2b4420;
        case 0x2b4474u: goto label_2b4474;
        case 0x2b4484u: goto label_2b4484;
        case 0x2b4494u: goto label_2b4494;
        case 0x2b44a4u: goto label_2b44a4;
        case 0x2b44d0u: goto label_2b44d0;
        case 0x2b44e0u: goto label_2b44e0;
        case 0x2b4510u: goto label_2b4510;
        case 0x2b452cu: goto label_2b452c;
        case 0x2b4534u: goto label_2b4534;
        default: break;
    }

    ctx->pc = 0x2b4080u;

    // 0x2b4080: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b4080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b4084: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b4084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b4088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b4088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b408c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b408cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b4090: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b4090u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b4094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b4098: 0xc0ac4c4  jal         func_2B1310
    ctx->pc = 0x2B4098u;
    SET_GPR_U32(ctx, 31, 0x2B40A0u);
    ctx->pc = 0x2B409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4098u;
            // 0x2b409c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1310u;
    if (runtime->hasFunction(0x2B1310u)) {
        auto targetFn = runtime->lookupFunction(0x2B1310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B40A0u; }
        if (ctx->pc != 0x2B40A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyChangeMain__15CMenuChrCngMenuFv_0x2b1310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B40A0u; }
        if (ctx->pc != 0x2B40A0u) { return; }
    }
    ctx->pc = 0x2B40A0u;
label_2b40a0:
    // 0x2b40a0: 0xdf829bb8  ld          $v0, -0x6448($gp)
    ctx->pc = 0x2b40a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941624)));
    // 0x2b40a4: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x2b40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2b40a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b40a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b40ac: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2b40acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2b40b0: 0x8e62021c  lw          $v0, 0x21C($s3)
    ctx->pc = 0x2b40b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 540)));
    // 0x2b40b4: 0x14470014  bne         $v0, $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B40B4u;
    {
        const bool branch_taken_0x2b40b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2b40b4) {
            ctx->pc = 0x2B4108u;
            goto label_2b4108;
        }
    }
    ctx->pc = 0x2B40BCu;
    // 0x2b40bc: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2b40bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2b40c0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b40c4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B40C4u;
    {
        const bool branch_taken_0x2b40c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b40c4) {
            ctx->pc = 0x2B4108u;
            goto label_2b4108;
        }
    }
    ctx->pc = 0x2B40CCu;
    // 0x2b40cc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b40ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b40d0: 0x8e660138  lw          $a2, 0x138($s3)
    ctx->pc = 0x2b40d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
    // 0x2b40d4: 0xc08b0e0  jal         func_22C380
    ctx->pc = 0x2B40D4u;
    SET_GPR_U32(ctx, 31, 0x2B40DCu);
    ctx->pc = 0x2B40D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B40D4u;
            // 0x2b40d8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B40DCu; }
        if (ctx->pc != 0x2B40DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B40DCu; }
        if (ctx->pc != 0x2B40DCu) { return; }
    }
    ctx->pc = 0x2B40DCu;
label_2b40dc:
    // 0x2b40dc: 0x2402ffd2  addiu       $v0, $zero, -0x2E
    ctx->pc = 0x2b40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x2b40e0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2b40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b40e4: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x2b40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x2b40e8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2b40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b40ec: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x2b40ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x2b40f0: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x2b40f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2b40f4: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2b40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x2b40f8: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x2b40f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x2b40fc: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x2b40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x2b4100: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B4100u;
    {
        const bool branch_taken_0x2b4100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4100u;
            // 0x2b4104: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4100) {
            ctx->pc = 0x2B4144u;
            goto label_2b4144;
        }
    }
    ctx->pc = 0x2B4108u;
label_2b4108:
    // 0x2b4108: 0x8e660110  lw          $a2, 0x110($s3)
    ctx->pc = 0x2b4108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x2b410c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b410cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b4110: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2b4110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b4114: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2B4114u;
    SET_GPR_U32(ctx, 31, 0x2B411Cu);
    ctx->pc = 0x2B4118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4114u;
            // 0x2b4118: 0x24a5ed18  addiu       $a1, $a1, -0x12E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B411Cu; }
        if (ctx->pc != 0x2B411Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B411Cu; }
        if (ctx->pc != 0x2B411Cu) { return; }
    }
    ctx->pc = 0x2B411Cu;
label_2b411c:
    // 0x2b411c: 0x8e640140  lw          $a0, 0x140($s3)
    ctx->pc = 0x2b411cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
    // 0x2b4120: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2b4120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b4124: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2b4124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b4128: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B4128u;
    SET_GPR_U32(ctx, 31, 0x2B4130u);
    ctx->pc = 0x2B412Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4128u;
            // 0x2b412c: 0x27a70074  addiu       $a3, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4130u; }
        if (ctx->pc != 0x2B4130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4130u; }
        if (ctx->pc != 0x2B4130u) { return; }
    }
    ctx->pc = 0x2B4130u;
label_2b4130:
    // 0x2b4130: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x2b4130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x2b4134: 0x278284a0  addiu       $v0, $gp, -0x7B60
    ctx->pc = 0x2b4134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935712));
    // 0x2b4138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b4138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b413c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2b413cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4140: 0xaf8293a8  sw          $v0, -0x6C58($gp)
    ctx->pc = 0x2b4140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939560), GPR_U32(ctx, 2));
label_2b4144:
    // 0x2b4144: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2b4144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2b4148: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2b4148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b414c: 0xc08ef88  jal         func_23BE20
    ctx->pc = 0x2B414Cu;
    SET_GPR_U32(ctx, 31, 0x2B4154u);
    ctx->pc = 0x2B4150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B414Cu;
            // 0x2b4150: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE20u;
    if (runtime->hasFunction(0x23BE20u)) {
        auto targetFn = runtime->lookupFunction(0x23BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4154u; }
        if (ctx->pc != 0x2B4154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4154u; }
        if (ctx->pc != 0x2B4154u) { return; }
    }
    ctx->pc = 0x2B4154u;
label_2b4154:
    // 0x2b4154: 0x9262011e  lbu         $v0, 0x11E($s3)
    ctx->pc = 0x2b4154u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 286)));
    // 0x2b4158: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4158u;
    {
        const bool branch_taken_0x2b4158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4158u;
            // 0x2b415c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4158) {
            ctx->pc = 0x2B4178u;
            goto label_2b4178;
        }
    }
    ctx->pc = 0x2B4160u;
    // 0x2b4160: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2b4160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b4164: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x2b4164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2b4168: 0xc08f000  jal         func_23C000
    ctx->pc = 0x2B4168u;
    SET_GPR_U32(ctx, 31, 0x2B4170u);
    ctx->pc = 0x2B416Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4168u;
            // 0x2b416c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (runtime->hasFunction(0x23C000u)) {
        auto targetFn = runtime->lookupFunction(0x23C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4170u; }
        if (ctx->pc != 0x2B4170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSetPos__12CMenuKeyFuncFii_0x23c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4170u; }
        if (ctx->pc != 0x2B4170u) { return; }
    }
    ctx->pc = 0x2B4170u;
label_2b4170:
    // 0x2b4170: 0xa260011e  sb          $zero, 0x11E($s3)
    ctx->pc = 0x2b4170u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 286), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4174: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2b4174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b4178:
    // 0x2b4178: 0xc08d208  jal         func_234820
    ctx->pc = 0x2B4178u;
    SET_GPR_U32(ctx, 31, 0x2B4180u);
    ctx->pc = 0x234820u;
    if (runtime->hasFunction(0x234820u)) {
        auto targetFn = runtime->lookupFunction(0x234820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4180u; }
        if (ctx->pc != 0x2B4180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonMenuModeID__Fv_0x234820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4180u; }
        if (ctx->pc != 0x2B4180u) { return; }
    }
    ctx->pc = 0x2B4180u;
label_2b4180:
    // 0x2b4180: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x2b4180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b4184: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2b4184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4188: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4188u;
    {
        const bool branch_taken_0x2b4188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b4188) {
            ctx->pc = 0x2B4194u;
            goto label_2b4194;
        }
    }
    ctx->pc = 0x2B4190u;
    // 0x2b4190: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b4190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4194:
    // 0x2b4194: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b4194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2b4198: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b4198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b419c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2b419cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41a0: 0xc08ad64  jal         func_22B590
    ctx->pc = 0x2B41A0u;
    SET_GPR_U32(ctx, 31, 0x2B41A8u);
    ctx->pc = 0x2B41A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B41A0u;
            // 0x2b41a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B590u;
    if (runtime->hasFunction(0x22B590u)) {
        auto targetFn = runtime->lookupFunction(0x22B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41A8u; }
        if (ctx->pc != 0x2B41A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMainMenuIconMove__18CMenuPosDataManageFPiii_0x22b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41A8u; }
        if (ctx->pc != 0x2B41A8u) { return; }
    }
    ctx->pc = 0x2B41A8u;
label_2b41a8:
    // 0x2b41a8: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2b41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2b41ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b41acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b41b0: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x2b41b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2b41b4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B41B4u;
    {
        const bool branch_taken_0x2b41b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B41B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B41B4u;
            // 0x2b41b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41b4) {
            ctx->pc = 0x2B41D4u;
            goto label_2b41d4;
        }
    }
    ctx->pc = 0x2B41BCu;
    // 0x2b41bc: 0x9262012c  lbu         $v0, 0x12C($s3)
    ctx->pc = 0x2b41bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x2b41c0: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B41C0u;
    {
        const bool branch_taken_0x2b41c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B41C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B41C0u;
            // 0x2b41c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41c0) {
            ctx->pc = 0x2B41D8u;
            goto label_2b41d8;
        }
    }
    ctx->pc = 0x2B41C8u;
    // 0x2b41c8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2b41c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2b41cc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B41CCu;
    {
        const bool branch_taken_0x2b41cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b41cc) {
            ctx->pc = 0x2B41E4u;
            goto label_2b41e4;
        }
    }
    ctx->pc = 0x2B41D4u;
label_2b41d4:
    // 0x2b41d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b41d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b41d8:
    // 0x2b41d8: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x2B41D8u;
    SET_GPR_U32(ctx, 31, 0x2B41E0u);
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41E0u; }
        if (ctx->pc != 0x2B41E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41E0u; }
        if (ctx->pc != 0x2B41E0u) { return; }
    }
    ctx->pc = 0x2B41E0u;
label_2b41e0:
    // 0x2b41e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b41e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b41e4:
    // 0x2b41e4: 0xc088ff8  jal         func_223FE0
    ctx->pc = 0x2B41E4u;
    SET_GPR_U32(ctx, 31, 0x2B41ECu);
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41ECu; }
        if (ctx->pc != 0x2B41ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41ECu; }
        if (ctx->pc != 0x2B41ECu) { return; }
    }
    ctx->pc = 0x2B41ECu;
label_2b41ec:
    // 0x2b41ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b41ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41f0: 0xc0acfa4  jal         func_2B3E90
    ctx->pc = 0x2B41F0u;
    SET_GPR_U32(ctx, 31, 0x2B41F8u);
    ctx->pc = 0x2B41F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B41F0u;
            // 0x2b41f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B3E90u;
    if (runtime->hasFunction(0x2B3E90u)) {
        auto targetFn = runtime->lookupFunction(0x2B3E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41F8u; }
        if (ctx->pc != 0x2B41F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckChrChange__15CMenuChrCngMenuFv_0x2b3e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B41F8u; }
        if (ctx->pc != 0x2B41F8u) { return; }
    }
    ctx->pc = 0x2B41F8u;
label_2b41f8:
    // 0x2b41f8: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x2b41f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b41fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b41fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4200: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b4200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4204: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2B4204u;
    {
        const bool branch_taken_0x2b4204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4204u;
            // 0x2b4208: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4204) {
            ctx->pc = 0x2B42E8u;
            goto label_2b42e8;
        }
    }
    ctx->pc = 0x2B420Cu;
    // 0x2b420c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B420Cu;
    {
        const bool branch_taken_0x2b420c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b420c) {
            ctx->pc = 0x2B421Cu;
            goto label_2b421c;
        }
    }
    ctx->pc = 0x2B4214u;
    // 0x2b4214: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2B4214u;
    {
        const bool branch_taken_0x2b4214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4214u;
            // 0x2b4218: 0x8f8394f8  lw          $v1, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4214) {
            ctx->pc = 0x2B4334u;
            goto label_2b4334;
        }
    }
    ctx->pc = 0x2B421Cu;
label_2b421c:
    // 0x2b421c: 0xc0ac35c  jal         func_2B0D70
    ctx->pc = 0x2B421Cu;
    SET_GPR_U32(ctx, 31, 0x2B4224u);
    ctx->pc = 0x2B4220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B421Cu;
            // 0x2b4220: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0D70u;
    if (runtime->hasFunction(0x2B0D70u)) {
        auto targetFn = runtime->lookupFunction(0x2B0D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4224u; }
        if (ctx->pc != 0x2B4224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterNPCFaceData__15CMenuChrCngMenuFv_0x2b0d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4224u; }
        if (ctx->pc != 0x2B4224u) { return; }
    }
    ctx->pc = 0x2B4224u;
label_2b4224:
    // 0x2b4224: 0x12200051  beqz        $s1, . + 4 + (0x51 << 2)
    ctx->pc = 0x2B4224u;
    {
        const bool branch_taken_0x2b4224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4224) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B422Cu;
    // 0x2b422c: 0x82620200  lb          $v0, 0x200($s3)
    ctx->pc = 0x2b422cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x2b4230: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2B4230u;
    {
        const bool branch_taken_0x2b4230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4230) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B4238u;
    // 0x2b4238: 0xc05239c  jal         func_148E70
    ctx->pc = 0x2B4238u;
    SET_GPR_U32(ctx, 31, 0x2B4240u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4240u; }
        if (ctx->pc != 0x2B4240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4240u; }
        if (ctx->pc != 0x2B4240u) { return; }
    }
    ctx->pc = 0x2B4240u;
label_2b4240:
    // 0x2b4240: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2B4240u;
    {
        const bool branch_taken_0x2b4240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4240) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B4248u;
    // 0x2b4248: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2b4248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2b424c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b424cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b4250: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x2b4250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2b4254: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4254u;
    {
        const bool branch_taken_0x2b4254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4254u;
            // 0x2b4258: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4254) {
            ctx->pc = 0x2B4264u;
            goto label_2b4264;
        }
    }
    ctx->pc = 0x2B425Cu;
    // 0x2b425c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B425Cu;
    {
        const bool branch_taken_0x2b425c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b425c) {
            ctx->pc = 0x2B426Cu;
            goto label_2b426c;
        }
    }
    ctx->pc = 0x2B4264u;
label_2b4264:
    // 0x2b4264: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2B4264u;
    {
        const bool branch_taken_0x2b4264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b4264) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B426Cu;
label_2b426c:
    // 0x2b426c: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x2b426cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b4270: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b4270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b4274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4278: 0xa6600256  sh          $zero, 0x256($s3)
    ctx->pc = 0x2b4278u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 598), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b427c: 0xa6620254  sh          $v0, 0x254($s3)
    ctx->pc = 0x2b427cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 596), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b4280: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b4280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4284: 0xa660011c  sh          $zero, 0x11C($s3)
    ctx->pc = 0x2b4284u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b4288: 0x24a5ed20  addiu       $a1, $a1, -0x12E0
    ctx->pc = 0x2b4288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962464));
    // 0x2b428c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B428Cu;
    SET_GPR_U32(ctx, 31, 0x2B4294u);
    ctx->pc = 0x2B4290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B428Cu;
            // 0x2b4290: 0xa262011e  sb          $v0, 0x11E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 286), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4294u; }
        if (ctx->pc != 0x2B4294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4294u; }
        if (ctx->pc != 0x2B4294u) { return; }
    }
    ctx->pc = 0x2B4294u;
label_2b4294:
    // 0x2b4294: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2b4294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2b4298: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b4298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b429c: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x2b429cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2b42a0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B42A0u;
    {
        const bool branch_taken_0x2b42a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B42A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42A0u;
            // 0x2b42a4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42a0) {
            ctx->pc = 0x2B42C0u;
            goto label_2b42c0;
        }
    }
    ctx->pc = 0x2B42A8u;
    // 0x2b42a8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b42a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b42ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b42acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b42b0: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B42B0u;
    SET_GPR_U32(ctx, 31, 0x2B42B8u);
    ctx->pc = 0x2B42B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42B0u;
            // 0x2b42b4: 0x24a5ed28  addiu       $a1, $a1, -0x12D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42B8u; }
        if (ctx->pc != 0x2B42B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42B8u; }
        if (ctx->pc != 0x2B42B8u) { return; }
    }
    ctx->pc = 0x2B42B8u;
label_2b42b8:
    // 0x2b42b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B42B8u;
    {
        const bool branch_taken_0x2b42b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B42BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42B8u;
            // 0x2b42bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42b8) {
            ctx->pc = 0x2B42D8u;
            goto label_2b42d8;
        }
    }
    ctx->pc = 0x2B42C0u;
label_2b42c0:
    // 0x2b42c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B42C0u;
    {
        const bool branch_taken_0x2b42c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B42C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42C0u;
            // 0x2b42c4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42c0) {
            ctx->pc = 0x2B42D4u;
            goto label_2b42d4;
        }
    }
    ctx->pc = 0x2B42C8u;
    // 0x2b42c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b42c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b42cc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B42CCu;
    SET_GPR_U32(ctx, 31, 0x2B42D4u);
    ctx->pc = 0x2B42D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42CCu;
            // 0x2b42d0: 0x24a5ed30  addiu       $a1, $a1, -0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42D4u; }
        if (ctx->pc != 0x2B42D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42D4u; }
        if (ctx->pc != 0x2B42D4u) { return; }
    }
    ctx->pc = 0x2B42D4u;
label_2b42d4:
    // 0x2b42d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b42d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b42d8:
    // 0x2b42d8: 0xc0ac380  jal         func_2B0E00
    ctx->pc = 0x2B42D8u;
    SET_GPR_U32(ctx, 31, 0x2B42E0u);
    ctx->pc = 0x2B42DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42D8u;
            // 0x2b42dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0E00u;
    if (runtime->hasFunction(0x2B0E00u)) {
        auto targetFn = runtime->lookupFunction(0x2B0E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42E0u; }
        if (ctx->pc != 0x2B42E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGNPCModel__15CMenuChrCngMenuFi_0x2b0e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B42E0u; }
        if (ctx->pc != 0x2B42E0u) { return; }
    }
    ctx->pc = 0x2B42E0u;
label_2b42e0:
    // 0x2b42e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2B42E0u;
    {
        const bool branch_taken_0x2b42e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B42E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42E0u;
            // 0x2b42e4: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42e0) {
            ctx->pc = 0x2B4370u;
            goto label_2b4370;
        }
    }
    ctx->pc = 0x2B42E8u;
label_2b42e8:
    // 0x2b42e8: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2B42E8u;
    {
        const bool branch_taken_0x2b42e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b42e8) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B42F0u;
    // 0x2b42f0: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B42F0u;
    {
        const bool branch_taken_0x2b42f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B42F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B42F0u;
            // 0x2b42f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42f0) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B42F8u;
    // 0x2b42f8: 0xc08dc80  jal         func_237200
    ctx->pc = 0x2B42F8u;
    SET_GPR_U32(ctx, 31, 0x2B4300u);
    ctx->pc = 0x237200u;
    if (runtime->hasFunction(0x237200u)) {
        auto targetFn = runtime->lookupFunction(0x237200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4300u; }
        if (ctx->pc != 0x2B4300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexBlock__14CBaseMenuClassFv_0x237200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4300u; }
        if (ctx->pc != 0x2B4300u) { return; }
    }
    ctx->pc = 0x2B4300u;
label_2b4300:
    // 0x2b4300: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2b4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2b4304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4308: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b4308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b430c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b430cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4310: 0x24a5ed38  addiu       $a1, $a1, -0x12C8
    ctx->pc = 0x2b4310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962488));
    // 0x2b4314: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x2b4314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
    // 0x2b4318: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2B4318u;
    SET_GPR_U32(ctx, 31, 0x2B4320u);
    ctx->pc = 0x2B431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4318u;
            // 0x2b431c: 0xaf8093a8  sw          $zero, -0x6C58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4320u; }
        if (ctx->pc != 0x2B4320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4320u; }
        if (ctx->pc != 0x2B4320u) { return; }
    }
    ctx->pc = 0x2B4320u;
label_2b4320:
    // 0x2b4320: 0x9262012c  lbu         $v0, 0x12C($s3)
    ctx->pc = 0x2b4320u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 300)));
    // 0x2b4324: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B4324u;
    {
        const bool branch_taken_0x2b4324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4324u;
            // 0x2b4328: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4324) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B432Cu;
    // 0x2b432c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B432Cu;
    {
        const bool branch_taken_0x2b432c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B432Cu;
            // 0x2b4330: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b432c) {
            ctx->pc = 0x2B436Cu;
            goto label_2b436c;
        }
    }
    ctx->pc = 0x2B4334u;
label_2b4334:
    // 0x2b4334: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b4334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b4338: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x2b4338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2b433c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B433Cu;
    {
        const bool branch_taken_0x2b433c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b433c) {
            ctx->pc = 0x2B4364u;
            goto label_2b4364;
        }
    }
    ctx->pc = 0x2B4344u;
    // 0x2b4344: 0x93829bb0  lbu         $v0, -0x6450($gp)
    ctx->pc = 0x2b4344u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941616)));
    // 0x2b4348: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4348u;
    {
        const bool branch_taken_0x2b4348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4348) {
            ctx->pc = 0x2B4364u;
            goto label_2b4364;
        }
    }
    ctx->pc = 0x2B4350u;
    // 0x2b4350: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4350u;
    {
        const bool branch_taken_0x2b4350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4350) {
            ctx->pc = 0x2B4364u;
            goto label_2b4364;
        }
    }
    ctx->pc = 0x2B4358u;
    // 0x2b4358: 0xa3849bb0  sb          $a0, -0x6450($gp)
    ctx->pc = 0x2b4358u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941616), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b435c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2B435Cu;
    SET_GPR_U32(ctx, 31, 0x2B4364u);
    ctx->pc = 0x2B4360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B435Cu;
            // 0x2b4360: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4364u; }
        if (ctx->pc != 0x2B4364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4364u; }
        if (ctx->pc != 0x2B4364u) { return; }
    }
    ctx->pc = 0x2B4364u;
label_2b4364:
    // 0x2b4364: 0xc0ac3f8  jal         func_2B0FE0
    ctx->pc = 0x2B4364u;
    SET_GPR_U32(ctx, 31, 0x2B436Cu);
    ctx->pc = 0x2B4368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4364u;
            // 0x2b4368: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0FE0u;
    if (runtime->hasFunction(0x2B0FE0u)) {
        auto targetFn = runtime->lookupFunction(0x2B0FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B436Cu; }
        if (ctx->pc != 0x2B436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBGNPCModel__15CMenuChrCngMenuFv_0x2b0fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B436Cu; }
        if (ctx->pc != 0x2B436Cu) { return; }
    }
    ctx->pc = 0x2B436Cu;
label_2b436c:
    // 0x2b436c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2b436cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_2b4370:
    // 0x2b4370: 0xc08acc8  jal         func_22B320
    ctx->pc = 0x2B4370u;
    SET_GPR_U32(ctx, 31, 0x2B4378u);
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4378u; }
        if (ctx->pc != 0x2B4378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4378u; }
        if (ctx->pc != 0x2B4378u) { return; }
    }
    ctx->pc = 0x2B4378u;
label_2b4378:
    // 0x2b4378: 0xc0acd34  jal         func_2B34D0
    ctx->pc = 0x2B4378u;
    SET_GPR_U32(ctx, 31, 0x2B4380u);
    ctx->pc = 0x2B437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4378u;
            // 0x2b437c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B34D0u;
    if (runtime->hasFunction(0x2B34D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B34D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4380u; }
        if (ctx->pc != 0x2B4380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTex__15CMenuChrCngMenuFv_0x2b34d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4380u; }
        if (ctx->pc != 0x2B4380u) { return; }
    }
    ctx->pc = 0x2B4380u;
label_2b4380:
    // 0x2b4380: 0x8e640110  lw          $a0, 0x110($s3)
    ctx->pc = 0x2b4380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x2b4384: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b4384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b4388: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4388u;
    {
        const bool branch_taken_0x2b4388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4388u;
            // 0x2b438c: 0x24910190  addiu       $s1, $a0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4388) {
            ctx->pc = 0x2B4398u;
            goto label_2b4398;
        }
    }
    ctx->pc = 0x2B4390u;
    // 0x2b4390: 0x8e710220  lw          $s1, 0x220($s3)
    ctx->pc = 0x2b4390u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
    // 0x2b4394: 0x0  nop
    ctx->pc = 0x2b4394u;
    // NOP
label_2b4398:
    // 0x2b4398: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x2b4398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b439c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B439Cu;
    {
        const bool branch_taken_0x2b439c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b439c) {
            ctx->pc = 0x2B43E8u;
            goto label_2b43e8;
        }
    }
    ctx->pc = 0x2B43A4u;
    // 0x2b43a4: 0xc0684a8  jal         func_1A12A0
    ctx->pc = 0x2B43A4u;
    SET_GPR_U32(ctx, 31, 0x2B43ACu);
    ctx->pc = 0x1A12A0u;
    if (runtime->hasFunction(0x1A12A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A12A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43ACu; }
        if (ctx->pc != 0x2B43ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsCheckParty__Fi_0x1a12a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43ACu; }
        if (ctx->pc != 0x2B43ACu) { return; }
    }
    ctx->pc = 0x2B43ACu;
label_2b43ac:
    // 0x2b43ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B43ACu;
    {
        const bool branch_taken_0x2b43ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B43B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B43ACu;
            // 0x2b43b0: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43ac) {
            ctx->pc = 0x2B43B8u;
            goto label_2b43b8;
        }
    }
    ctx->pc = 0x2B43B4u;
    // 0x2b43b4: 0x24110194  addiu       $s1, $zero, 0x194
    ctx->pc = 0x2b43b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
label_2b43b8:
    // 0x2b43b8: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2B43B8u;
    SET_GPR_U32(ctx, 31, 0x2B43C0u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43C0u; }
        if (ctx->pc != 0x2B43C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43C0u; }
        if (ctx->pc != 0x2B43C0u) { return; }
    }
    ctx->pc = 0x2B43C0u;
label_2b43c0:
    // 0x2b43c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B43C0u;
    {
        const bool branch_taken_0x2b43c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b43c0) {
            ctx->pc = 0x2B43E8u;
            goto label_2b43e8;
        }
    }
    ctx->pc = 0x2B43C8u;
    // 0x2b43c8: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x2b43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x2b43cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b43d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B43D0u;
    {
        const bool branch_taken_0x2b43d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b43d0) {
            ctx->pc = 0x2B43E8u;
            goto label_2b43e8;
        }
    }
    ctx->pc = 0x2B43D8u;
    // 0x2b43d8: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x2b43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x2b43dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B43DCu;
    {
        const bool branch_taken_0x2b43dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b43dc) {
            ctx->pc = 0x2B43E8u;
            goto label_2b43e8;
        }
    }
    ctx->pc = 0x2B43E4u;
    // 0x2b43e4: 0x24110199  addiu       $s1, $zero, 0x199
    ctx->pc = 0x2b43e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
label_2b43e8:
    // 0x2b43e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b43e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b43ec: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x2b43ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x2b43f0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2B43F0u;
    SET_GPR_U32(ctx, 31, 0x2B43F8u);
    ctx->pc = 0x2B43F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B43F0u;
            // 0x2b43f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43F8u; }
        if (ctx->pc != 0x2B43F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B43F8u; }
        if (ctx->pc != 0x2B43F8u) { return; }
    }
    ctx->pc = 0x2B43F8u;
label_2b43f8:
    // 0x2b43f8: 0x8e63021c  lw          $v1, 0x21C($s3)
    ctx->pc = 0x2b43f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 540)));
    // 0x2b43fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4400: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2B4400u;
    {
        const bool branch_taken_0x2b4400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4400u;
            // 0x2b4404: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4400) {
            ctx->pc = 0x2B4538u;
            goto label_2b4538;
        }
    }
    ctx->pc = 0x2B4408u;
    // 0x2b4408: 0x8e710138  lw          $s1, 0x138($s3)
    ctx->pc = 0x2b4408u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
    // 0x2b440c: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x2b440cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2b4410: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x2B4410u;
    {
        const bool branch_taken_0x2b4410 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4410u;
            // 0x2b4414: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4410) {
            ctx->pc = 0x2B4534u;
            goto label_2b4534;
        }
    }
    ctx->pc = 0x2B4418u;
    // 0x2b4418: 0xc068644  jal         func_1A1910
    ctx->pc = 0x2B4418u;
    SET_GPR_U32(ctx, 31, 0x2B4420u);
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4420u; }
        if (ctx->pc != 0x2B4420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4420u; }
        if (ctx->pc != 0x2B4420u) { return; }
    }
    ctx->pc = 0x2B4420u;
label_2b4420:
    // 0x2b4420: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x2b4420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b4424: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x2B4424u;
    {
        const bool branch_taken_0x2b4424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4424) {
            ctx->pc = 0x2B4534u;
            goto label_2b4534;
        }
    }
    ctx->pc = 0x2B442Cu;
    // 0x2b442c: 0xdf8384a8  ld          $v1, -0x7B58($gp)
    ctx->pc = 0x2b442cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935720)));
    // 0x2b4430: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2b4430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b4434: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2b4434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2b4438: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2b4438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2b443c: 0x2442cb70  addiu       $v0, $v0, -0x3490
    ctx->pc = 0x2b443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953840));
    // 0x2b4440: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b4440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b4444: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2b4444u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x2b4448: 0xdf839bc0  ld          $v1, -0x6440($gp)
    ctx->pc = 0x2b4448u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294941632)));
    // 0x2b444c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2b444cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2b4450: 0x8e630138  lw          $v1, 0x138($s3)
    ctx->pc = 0x2b4450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 312)));
    // 0x2b4454: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b4458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b445c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2b445cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4460: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4460u;
    {
        const bool branch_taken_0x2b4460 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4460u;
            // 0x2b4464: 0x8c31ca5c  lw          $s1, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4460) {
            ctx->pc = 0x2B4484u;
            goto label_2b4484;
        }
    }
    ctx->pc = 0x2B4468u;
    // 0x2b4468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b4468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b446c: 0xc065dc0  jal         func_197700
    ctx->pc = 0x2B446Cu;
    SET_GPR_U32(ctx, 31, 0x2B4474u);
    ctx->pc = 0x2B4470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B446Cu;
            // 0x2b4470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4474u; }
        if (ctx->pc != 0x2B4474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4474u; }
        if (ctx->pc != 0x2B4474u) { return; }
    }
    ctx->pc = 0x2B4474u;
label_2b4474:
    // 0x2b4474: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2b4474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x2b4478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b4478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b447c: 0xc066030  jal         func_1980C0
    ctx->pc = 0x2B447Cu;
    SET_GPR_U32(ctx, 31, 0x2B4484u);
    ctx->pc = 0x2B4480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B447Cu;
            // 0x2b4480: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1980C0u;
    if (runtime->hasFunction(0x1980C0u)) {
        auto targetFn = runtime->lookupFunction(0x1980C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4484u; }
        if (ctx->pc != 0x2B4484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWHp__13CGameDataUsedFPi_0x1980c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4484u; }
        if (ctx->pc != 0x2B4484u) { return; }
    }
    ctx->pc = 0x2B4484u;
label_2b4484:
    // 0x2b4484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4488: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2b4488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b448c: 0xc087720  jal         func_21DC80
    ctx->pc = 0x2B448Cu;
    SET_GPR_U32(ctx, 31, 0x2B4494u);
    ctx->pc = 0x2B4490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B448Cu;
            // 0x2b4490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4494u; }
        if (ctx->pc != 0x2B4494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4494u; }
        if (ctx->pc != 0x2B4494u) { return; }
    }
    ctx->pc = 0x2B4494u;
label_2b4494:
    // 0x2b4494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b4494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4498: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2b4498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2b449c: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x2B449Cu;
    SET_GPR_U32(ctx, 31, 0x2B44A4u);
    ctx->pc = 0x2B44A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B449Cu;
            // 0x2b44a0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B44A4u; }
        if (ctx->pc != 0x2B44A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B44A4u; }
        if (ctx->pc != 0x2B44A4u) { return; }
    }
    ctx->pc = 0x2B44A4u;
label_2b44a4:
    // 0x2b44a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b44a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b44a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b44ac: 0xae221a84  sw          $v0, 0x1A84($s1)
    ctx->pc = 0x2b44acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6788), GPR_U32(ctx, 2));
    // 0x2b44b0: 0x8e230198  lw          $v1, 0x198($s1)
    ctx->pc = 0x2b44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x2b44b4: 0x8c22cb4c  lw          $v0, -0x34B4($at)
    ctx->pc = 0x2b44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
    // 0x2b44b8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2b44b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2b44bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b44bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b44c0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2b44c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b44c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b44c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b44c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B44C8u;
    SET_GPR_U32(ctx, 31, 0x2B44D0u);
    ctx->pc = 0x2B44CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B44C8u;
            // 0x2b44cc: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B44D0u; }
        if (ctx->pc != 0x2B44D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B44D0u; }
        if (ctx->pc != 0x2B44D0u) { return; }
    }
    ctx->pc = 0x2B44D0u;
label_2b44d0:
    // 0x2b44d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b44d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b44d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b44d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b44d8: 0xc0548b0  jal         func_1522C0
    ctx->pc = 0x2B44D8u;
    SET_GPR_U32(ctx, 31, 0x2B44E0u);
    ctx->pc = 0x2B44DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B44D8u;
            // 0x2b44dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1522C0u;
    if (runtime->hasFunction(0x1522C0u)) {
        auto targetFn = runtime->lookupFunction(0x1522C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B44E0u; }
        if (ctx->pc != 0x2B44E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStrWidth__6ClsMesFi_0x1522c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B44E0u; }
        if (ctx->pc != 0x2B44E0u) { return; }
    }
    ctx->pc = 0x2B44E0u;
label_2b44e0:
    // 0x2b44e0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B44E0u;
    {
        const bool branch_taken_0x2b44e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B44E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B44E0u;
            // 0x2b44e4: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44e0) {
            ctx->pc = 0x2B44F0u;
            goto label_2b44f0;
        }
    }
    ctx->pc = 0x2B44E8u;
    // 0x2b44e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b44ec: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x2b44ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_2b44f0:
    // 0x2b44f0: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x2b44f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2b44f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b44f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b44f8: 0x8c23cb4c  lw          $v1, -0x34B4($at)
    ctx->pc = 0x2b44f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
    // 0x2b44fc: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x2b44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x2b4500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4504: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2b4504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4508: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2B4508u;
    SET_GPR_U32(ctx, 31, 0x2B4510u);
    ctx->pc = 0x2B450Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4508u;
            // 0x2b450c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4510u; }
        if (ctx->pc != 0x2B4510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4510u; }
        if (ctx->pc != 0x2B4510u) { return; }
    }
    ctx->pc = 0x2B4510u;
label_2b4510:
    // 0x2b4510: 0xae321b94  sw          $s2, 0x1B94($s1)
    ctx->pc = 0x2b4510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7060), GPR_U32(ctx, 18));
    // 0x2b4514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4518: 0xae221b98  sw          $v0, 0x1B98($s1)
    ctx->pc = 0x2b4518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7064), GPR_U32(ctx, 2));
    // 0x2b451c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4520: 0xae231c34  sw          $v1, 0x1C34($s1)
    ctx->pc = 0x2b4520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7220), GPR_U32(ctx, 3));
    // 0x2b4524: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2B4524u;
    SET_GPR_U32(ctx, 31, 0x2B452Cu);
    ctx->pc = 0x2B4528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4524u;
            // 0x2b4528: 0x240501c3  addiu       $a1, $zero, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 451));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B452Cu; }
        if (ctx->pc != 0x2B452Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B452Cu; }
        if (ctx->pc != 0x2B452Cu) { return; }
    }
    ctx->pc = 0x2B452Cu;
label_2b452c:
    // 0x2b452c: 0xc087898  jal         func_21E260
    ctx->pc = 0x2B452Cu;
    SET_GPR_U32(ctx, 31, 0x2B4534u);
    ctx->pc = 0x2B4530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B452Cu;
            // 0x2b4530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4534u; }
        if (ctx->pc != 0x2B4534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4534u; }
        if (ctx->pc != 0x2B4534u) { return; }
    }
    ctx->pc = 0x2B4534u;
label_2b4534:
    // 0x2b4534: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b4534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b4538:
    // 0x2b4538: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b4538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b453c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b453cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b4540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b454c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B454Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B454Cu;
            // 0x2b4550: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B4554u;
}
