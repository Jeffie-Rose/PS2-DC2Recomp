#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawActiveFont__13CNameRegiMenuFv
// Address: 0x30d870 - 0x30dd94
void DrawActiveFont__13CNameRegiMenuFv_0x30d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawActiveFont__13CNameRegiMenuFv_0x30d870");
#endif

    switch (ctx->pc) {
        case 0x30d8a4u: goto label_30d8a4;
        case 0x30d8bcu: goto label_30d8bc;
        case 0x30d90cu: goto label_30d90c;
        case 0x30d958u: goto label_30d958;
        case 0x30d964u: goto label_30d964;
        case 0x30d978u: goto label_30d978;
        case 0x30d988u: goto label_30d988;
        case 0x30d994u: goto label_30d994;
        case 0x30d9a8u: goto label_30d9a8;
        case 0x30d9b8u: goto label_30d9b8;
        case 0x30d9c4u: goto label_30d9c4;
        case 0x30d9d8u: goto label_30d9d8;
        case 0x30d9ecu: goto label_30d9ec;
        case 0x30d9f8u: goto label_30d9f8;
        case 0x30da0cu: goto label_30da0c;
        case 0x30da1cu: goto label_30da1c;
        case 0x30da28u: goto label_30da28;
        case 0x30da3cu: goto label_30da3c;
        case 0x30da4cu: goto label_30da4c;
        case 0x30da58u: goto label_30da58;
        case 0x30da6cu: goto label_30da6c;
        case 0x30daacu: goto label_30daac;
        case 0x30dabcu: goto label_30dabc;
        case 0x30db68u: goto label_30db68;
        case 0x30db78u: goto label_30db78;
        case 0x30db8cu: goto label_30db8c;
        case 0x30dbacu: goto label_30dbac;
        case 0x30dbbcu: goto label_30dbbc;
        case 0x30dbd0u: goto label_30dbd0;
        case 0x30dc00u: goto label_30dc00;
        case 0x30dc10u: goto label_30dc10;
        case 0x30dc30u: goto label_30dc30;
        case 0x30dc48u: goto label_30dc48;
        case 0x30dc68u: goto label_30dc68;
        case 0x30dc90u: goto label_30dc90;
        case 0x30dca4u: goto label_30dca4;
        case 0x30dcccu: goto label_30dccc;
        case 0x30dcdcu: goto label_30dcdc;
        case 0x30dcf0u: goto label_30dcf0;
        case 0x30dd18u: goto label_30dd18;
        case 0x30dd24u: goto label_30dd24;
        case 0x30dd38u: goto label_30dd38;
        case 0x30dd48u: goto label_30dd48;
        case 0x30dd54u: goto label_30dd54;
        case 0x30dd68u: goto label_30dd68;
        default: break;
    }

    ctx->pc = 0x30d870u;

    // 0x30d870: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x30d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x30d874: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x30d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x30d878: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x30d878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x30d87c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x30d87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30d880: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30d880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30d884: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30d884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30d888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30d888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30d88c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30d88cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30d894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30d894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30d898: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d89c: 0xc0c2a34  jal         func_30A8D0
    ctx->pc = 0x30D89Cu;
    SET_GPR_U32(ctx, 31, 0x30D8A4u);
    ctx->pc = 0x30D8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D89Cu;
            // 0x30d8a0: 0x241000f4  addiu       $s0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30A8D0u;
    if (runtime->hasFunction(0x30A8D0u)) {
        auto targetFn = runtime->lookupFunction(0x30A8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D8A4u; }
        if (ctx->pc != 0x30D8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D8A4u; }
        if (ctx->pc != 0x30D8A4u) { return; }
    }
    ctx->pc = 0x30D8A4u;
label_30d8a4:
    // 0x30d8a4: 0x8f83a1f0  lw          $v1, -0x5E10($gp)
    ctx->pc = 0x30d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943216)));
    // 0x30d8a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D8A8u;
    {
        const bool branch_taken_0x30d8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D8A8u;
            // 0x30d8ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8a8) {
            ctx->pc = 0x30D8BCu;
            goto label_30d8bc;
        }
    }
    ctx->pc = 0x30D8B0u;
    // 0x30d8b0: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x30d8b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d8b4: 0xc08878c  jal         func_221E30
    ctx->pc = 0x30D8B4u;
    SET_GPR_U32(ctx, 31, 0x30D8BCu);
    ctx->pc = 0x30D8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D8B4u;
            // 0x30d8b8: 0x2784a1dc  addiu       $a0, $gp, -0x5E24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D8BCu; }
        if (ctx->pc != 0x30D8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D8BCu; }
        if (ctx->pc != 0x30D8BCu) { return; }
    }
    ctx->pc = 0x30D8BCu;
label_30d8bc:
    // 0x30d8bc: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x30d8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30d8c0: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x30d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30d8c4: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x30d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30d8c8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30d8cc: 0x86840014  lh          $a0, 0x14($s4)
    ctx->pc = 0x30d8ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x30d8d0: 0x2463de80  addiu       $v1, $v1, -0x2180
    ctx->pc = 0x30d8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958720));
    // 0x30d8d4: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x30d8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30d8d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d8dc: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x30D8DCu;
    {
        const bool branch_taken_0x30d8dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x30D8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D8DCu;
            // 0x30d8e0: 0x26910300  addiu       $s1, $s4, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8dc) {
            ctx->pc = 0x30D90Cu;
            goto label_30d90c;
        }
    }
    ctx->pc = 0x30D8E4u;
    // 0x30d8e4: 0xc68c0178  lwc1        $f12, 0x178($s4)
    ctx->pc = 0x30d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d8e8: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x30d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x30d8ec: 0xc68d017c  lwc1        $f13, 0x17C($s4)
    ctx->pc = 0x30d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30d8f0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x30d8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30d8f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30d8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30d8f8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x30d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30d8fc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x30d8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30d900: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30d900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d904: 0xc0887b8  jal         func_221EE0
    ctx->pc = 0x30D904u;
    SET_GPR_U32(ctx, 31, 0x30D90Cu);
    ctx->pc = 0x30D908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D904u;
            // 0x30d908: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D90Cu; }
        if (ctx->pc != 0x30D90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D90Cu; }
        if (ctx->pc != 0x30D90Cu) { return; }
    }
    ctx->pc = 0x30D90Cu;
label_30d90c:
    // 0x30d90c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30d910: 0x124300fe  beq         $s2, $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x30D910u;
    {
        const bool branch_taken_0x30d910 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x30D914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D910u;
            // 0x30d914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d910) {
            ctx->pc = 0x30DD0Cu;
            goto label_30dd0c;
        }
    }
    ctx->pc = 0x30D918u;
    // 0x30d918: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30d918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d91c: 0x12430055  beq         $s2, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x30D91Cu;
    {
        const bool branch_taken_0x30d91c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d91c) {
            ctx->pc = 0x30DA74u;
            goto label_30da74;
        }
    }
    ctx->pc = 0x30D924u;
    // 0x30d924: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x30D924u;
    {
        const bool branch_taken_0x30d924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D924u;
            // 0x30d928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d924) {
            ctx->pc = 0x30D9E0u;
            goto label_30d9e0;
        }
    }
    ctx->pc = 0x30D92Cu;
    // 0x30d92c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d930: 0x12430006  beq         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30D930u;
    {
        const bool branch_taken_0x30d930 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x30D934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D930u;
            // 0x30d934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d930) {
            ctx->pc = 0x30D94Cu;
            goto label_30d94c;
        }
    }
    ctx->pc = 0x30D938u;
    // 0x30d938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d93c: 0x12430004  beq         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D93Cu;
    {
        const bool branch_taken_0x30d93c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x30D940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D93Cu;
            // 0x30d940: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d93c) {
            ctx->pc = 0x30D950u;
            goto label_30d950;
        }
    }
    ctx->pc = 0x30D944u;
    // 0x30d944: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x30D944u;
    {
        const bool branch_taken_0x30d944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D944u;
            // 0x30d948: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d944) {
            ctx->pc = 0x30DD6Cu;
            goto label_30dd6c;
        }
    }
    ctx->pc = 0x30D94Cu;
label_30d94c:
    // 0x30d94c: 0x2405003e  addiu       $a1, $zero, 0x3E
    ctx->pc = 0x30d94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_30d950:
    // 0x30d950: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30D950u;
    SET_GPR_U32(ctx, 31, 0x30D958u);
    ctx->pc = 0x30D954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D950u;
            // 0x30d954: 0x240600f4  addiu       $a2, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D958u; }
        if (ctx->pc != 0x30D958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D958u; }
        if (ctx->pc != 0x30D958u) { return; }
    }
    ctx->pc = 0x30D958u;
label_30d958:
    // 0x30d958: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x30d958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30d95c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30D95Cu;
    SET_GPR_U32(ctx, 31, 0x30D964u);
    ctx->pc = 0x30D960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D95Cu;
            // 0x30d960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D964u; }
        if (ctx->pc != 0x30D964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D964u; }
        if (ctx->pc != 0x30D964u) { return; }
    }
    ctx->pc = 0x30D964u;
label_30d964:
    // 0x30d964: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30d964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30d968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d96c: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30d96cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30d970: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30D970u;
    SET_GPR_U32(ctx, 31, 0x30D978u);
    ctx->pc = 0x30D974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D970u;
            // 0x30d974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D978u; }
        if (ctx->pc != 0x30D978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D978u; }
        if (ctx->pc != 0x30D978u) { return; }
    }
    ctx->pc = 0x30D978u;
label_30d978:
    // 0x30d978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d97c: 0x240500c6  addiu       $a1, $zero, 0xC6
    ctx->pc = 0x30d97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x30d980: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30D980u;
    SET_GPR_U32(ctx, 31, 0x30D988u);
    ctx->pc = 0x30D984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D980u;
            // 0x30d984: 0x240600f4  addiu       $a2, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D988u; }
        if (ctx->pc != 0x30D988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D988u; }
        if (ctx->pc != 0x30D988u) { return; }
    }
    ctx->pc = 0x30D988u;
label_30d988:
    // 0x30d988: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x30d988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30d98c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30D98Cu;
    SET_GPR_U32(ctx, 31, 0x30D994u);
    ctx->pc = 0x30D990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D98Cu;
            // 0x30d990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D994u; }
        if (ctx->pc != 0x30D994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D994u; }
        if (ctx->pc != 0x30D994u) { return; }
    }
    ctx->pc = 0x30D994u;
label_30d994:
    // 0x30d994: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30d994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30d998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d99c: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30d99cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30d9a0: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30D9A0u;
    SET_GPR_U32(ctx, 31, 0x30D9A8u);
    ctx->pc = 0x30D9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9A0u;
            // 0x30d9a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9A8u; }
        if (ctx->pc != 0x30D9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9A8u; }
        if (ctx->pc != 0x30D9A8u) { return; }
    }
    ctx->pc = 0x30D9A8u;
label_30d9a8:
    // 0x30d9a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9ac: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x30d9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x30d9b0: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30D9B0u;
    SET_GPR_U32(ctx, 31, 0x30D9B8u);
    ctx->pc = 0x30D9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9B0u;
            // 0x30d9b4: 0x240600f4  addiu       $a2, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9B8u; }
        if (ctx->pc != 0x30D9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9B8u; }
        if (ctx->pc != 0x30D9B8u) { return; }
    }
    ctx->pc = 0x30D9B8u;
label_30d9b8:
    // 0x30d9b8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x30d9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x30d9bc: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30D9BCu;
    SET_GPR_U32(ctx, 31, 0x30D9C4u);
    ctx->pc = 0x30D9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9BCu;
            // 0x30d9c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9C4u; }
        if (ctx->pc != 0x30D9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9C4u; }
        if (ctx->pc != 0x30D9C4u) { return; }
    }
    ctx->pc = 0x30D9C4u;
label_30d9c4:
    // 0x30d9c4: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30d9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30d9c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d9cc: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30d9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30d9d0: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30D9D0u;
    SET_GPR_U32(ctx, 31, 0x30D9D8u);
    ctx->pc = 0x30D9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9D0u;
            // 0x30d9d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9D8u; }
        if (ctx->pc != 0x30D9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9D8u; }
        if (ctx->pc != 0x30D9D8u) { return; }
    }
    ctx->pc = 0x30D9D8u;
label_30d9d8:
    // 0x30d9d8: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x30D9D8u;
    {
        const bool branch_taken_0x30d9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d9d8) {
            ctx->pc = 0x30DD68u;
            goto label_30dd68;
        }
    }
    ctx->pc = 0x30D9E0u;
label_30d9e0:
    // 0x30d9e0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x30d9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30d9e4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30D9E4u;
    SET_GPR_U32(ctx, 31, 0x30D9ECu);
    ctx->pc = 0x30D9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9E4u;
            // 0x30d9e8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9ECu; }
        if (ctx->pc != 0x30D9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9ECu; }
        if (ctx->pc != 0x30D9ECu) { return; }
    }
    ctx->pc = 0x30D9ECu;
label_30d9ec:
    // 0x30d9ec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x30d9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30d9f0: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30D9F0u;
    SET_GPR_U32(ctx, 31, 0x30D9F8u);
    ctx->pc = 0x30D9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D9F0u;
            // 0x30d9f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9F8u; }
        if (ctx->pc != 0x30D9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D9F8u; }
        if (ctx->pc != 0x30D9F8u) { return; }
    }
    ctx->pc = 0x30D9F8u;
label_30d9f8:
    // 0x30d9f8: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30d9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30d9fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30d9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da00: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30da00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30da04: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30DA04u;
    SET_GPR_U32(ctx, 31, 0x30DA0Cu);
    ctx->pc = 0x30DA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA04u;
            // 0x30da08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA0Cu; }
        if (ctx->pc != 0x30DA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA0Cu; }
        if (ctx->pc != 0x30DA0Cu) { return; }
    }
    ctx->pc = 0x30DA0Cu;
label_30da0c:
    // 0x30da0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30da0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da10: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x30da10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30da14: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30DA14u;
    SET_GPR_U32(ctx, 31, 0x30DA1Cu);
    ctx->pc = 0x30DA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA14u;
            // 0x30da18: 0x24060130  addiu       $a2, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA1Cu; }
        if (ctx->pc != 0x30DA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA1Cu; }
        if (ctx->pc != 0x30DA1Cu) { return; }
    }
    ctx->pc = 0x30DA1Cu;
label_30da1c:
    // 0x30da1c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x30da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30da20: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30DA20u;
    SET_GPR_U32(ctx, 31, 0x30DA28u);
    ctx->pc = 0x30DA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA20u;
            // 0x30da24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA28u; }
        if (ctx->pc != 0x30DA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA28u; }
        if (ctx->pc != 0x30DA28u) { return; }
    }
    ctx->pc = 0x30DA28u;
label_30da28:
    // 0x30da28: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30da28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30da2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30da2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da30: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30da30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30da34: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30DA34u;
    SET_GPR_U32(ctx, 31, 0x30DA3Cu);
    ctx->pc = 0x30DA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA34u;
            // 0x30da38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA3Cu; }
        if (ctx->pc != 0x30DA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA3Cu; }
        if (ctx->pc != 0x30DA3Cu) { return; }
    }
    ctx->pc = 0x30DA3Cu;
label_30da3c:
    // 0x30da3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30da3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da40: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x30da40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30da44: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30DA44u;
    SET_GPR_U32(ctx, 31, 0x30DA4Cu);
    ctx->pc = 0x30DA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA44u;
            // 0x30da48: 0x24060160  addiu       $a2, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA4Cu; }
        if (ctx->pc != 0x30DA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA4Cu; }
        if (ctx->pc != 0x30DA4Cu) { return; }
    }
    ctx->pc = 0x30DA4Cu;
label_30da4c:
    // 0x30da4c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x30da4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x30da50: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30DA50u;
    SET_GPR_U32(ctx, 31, 0x30DA58u);
    ctx->pc = 0x30DA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA50u;
            // 0x30da54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA58u; }
        if (ctx->pc != 0x30DA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA58u; }
        if (ctx->pc != 0x30DA58u) { return; }
    }
    ctx->pc = 0x30DA58u;
label_30da58:
    // 0x30da58: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30da58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30da5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30da5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da60: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30da60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30da64: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30DA64u;
    SET_GPR_U32(ctx, 31, 0x30DA6Cu);
    ctx->pc = 0x30DA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA64u;
            // 0x30da68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA6Cu; }
        if (ctx->pc != 0x30DA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DA6Cu; }
        if (ctx->pc != 0x30DA6Cu) { return; }
    }
    ctx->pc = 0x30DA6Cu;
label_30da6c:
    // 0x30da6c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x30DA6Cu;
    {
        const bool branch_taken_0x30da6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30da6c) {
            ctx->pc = 0x30DD68u;
            goto label_30dd68;
        }
    }
    ctx->pc = 0x30DA74u;
label_30da74:
    // 0x30da74: 0x8e830118  lw          $v1, 0x118($s4)
    ctx->pc = 0x30da74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x30da78: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x30da78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30da7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30da80: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30da80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30da84: 0xa3a00196  sb          $zero, 0x196($sp)
    ctx->pc = 0x30da84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 406), (uint8_t)GPR_U32(ctx, 0));
    // 0x30da88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30da8c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30da90: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x30da90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30da94: 0x2a410672  slti        $at, $s2, 0x672
    ctx->pc = 0x30da94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1650) ? 1 : 0);
    // 0x30da98: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x30DA98u;
    {
        const bool branch_taken_0x30da98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DA98u;
            // 0x30da9c: 0xa3a00197  sb          $zero, 0x197($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 407), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30da98) {
            ctx->pc = 0x30DBECu;
            goto label_30dbec;
        }
    }
    ctx->pc = 0x30DAA0u;
    // 0x30daa0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30daa0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30daa4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x30daa4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30daa8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x30daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_30daac:
    // 0x30daac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30daacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dab0: 0x24540170  addiu       $s4, $v0, 0x170
    ctx->pc = 0x30dab0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x30dab4: 0xc0c2b1c  jal         func_30AC70
    ctx->pc = 0x30DAB4u;
    SET_GPR_U32(ctx, 31, 0x30DABCu);
    ctx->pc = 0x30DAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DAB4u;
            // 0x30dab8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AC70u;
    if (runtime->hasFunction(0x30AC70u)) {
        auto targetFn = runtime->lookupFunction(0x30AC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DABCu; }
        if (ctx->pc != 0x30DABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNameRegistFontKanjiList__FiPc_0x30ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DABCu; }
        if (ctx->pc != 0x30DABCu) { return; }
    }
    ctx->pc = 0x30DABCu;
label_30dabc:
    // 0x30dabc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DABCu;
    {
        const bool branch_taken_0x30dabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30dabc) {
            ctx->pc = 0x30DACCu;
            goto label_30dacc;
        }
    }
    ctx->pc = 0x30DAC4u;
    // 0x30dac4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x30DAC4u;
    {
        const bool branch_taken_0x30dac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DAC4u;
            // 0x30dac8: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dac4) {
            ctx->pc = 0x30DB94u;
            goto label_30db94;
        }
    }
    ctx->pc = 0x30DACCu;
label_30dacc:
    // 0x30dacc: 0x0  nop
    ctx->pc = 0x30daccu;
    // NOP
    // 0x30dad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dad4: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x30DAD4u;
    {
        const bool branch_taken_0x30dad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30DAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DAD4u;
            // 0x30dad8: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dad4) {
            ctx->pc = 0x30DB40u;
            goto label_30db40;
        }
    }
    ctx->pc = 0x30DADCu;
    // 0x30dadc: 0x2fd1021  addu        $v0, $s7, $sp
    ctx->pc = 0x30dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
    // 0x30dae0: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x30dae0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30dae4: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x30dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x30dae8: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x30dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x30daec: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x30daecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x30daf0: 0x24460130  addiu       $a2, $v0, 0x130
    ctx->pc = 0x30daf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x30daf4: 0x26d60003  addiu       $s6, $s6, 0x3
    ctx->pc = 0x30daf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
    // 0x30daf8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30daf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30dafc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x30dafcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x30db00: 0x2010  mfhi        $a0
    ctx->pc = 0x30db00u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x30db04: 0x2603fffd  addiu       $v1, $s0, -0x3
    ctx->pc = 0x30db04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x30db08: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30db08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30db0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30db10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30db10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30db14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30db14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30db18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30db18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30db1c: 0x2442002e  addiu       $v0, $v0, 0x2E
    ctx->pc = 0x30db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 46));
    // 0x30db20: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x30db20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x30db24: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x30db24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x30db28: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x30db28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30db2c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x30db2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30db30: 0x82820001  lb          $v0, 0x1($s4)
    ctx->pc = 0x30db30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x30db34: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x30db34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30db38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x30DB38u;
    {
        const bool branch_taken_0x30db38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB38u;
            // 0x30db3c: 0xa0c00002  sb          $zero, 0x2($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db38) {
            ctx->pc = 0x30DB94u;
            goto label_30db94;
        }
    }
    ctx->pc = 0x30DB40u;
label_30db40:
    // 0x30db40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30db44: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DB44u;
    {
        const bool branch_taken_0x30db44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30db44) {
            ctx->pc = 0x30DB54u;
            goto label_30db54;
        }
    }
    ctx->pc = 0x30DB4Cu;
    // 0x30db4c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x30DB4Cu;
    {
        const bool branch_taken_0x30db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB4Cu;
            // 0x30db50: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db4c) {
            ctx->pc = 0x30DB94u;
            goto label_30db94;
        }
    }
    ctx->pc = 0x30DB54u;
label_30db54:
    // 0x30db54: 0x0  nop
    ctx->pc = 0x30db54u;
    // NOP
    // 0x30db58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30db58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db5c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x30db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x30db60: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30DB60u;
    SET_GPR_U32(ctx, 31, 0x30DB68u);
    ctx->pc = 0x30DB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB60u;
            // 0x30db64: 0xa2800000  sb          $zero, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB68u; }
        if (ctx->pc != 0x30DB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB68u; }
        if (ctx->pc != 0x30DB68u) { return; }
    }
    ctx->pc = 0x30DB68u;
label_30db68:
    // 0x30db68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30db68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30db6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db70: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30DB70u;
    SET_GPR_U32(ctx, 31, 0x30DB78u);
    ctx->pc = 0x30DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB70u;
            // 0x30db74: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB78u; }
        if (ctx->pc != 0x30DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB78u; }
        if (ctx->pc != 0x30DB78u) { return; }
    }
    ctx->pc = 0x30DB78u;
label_30db78:
    // 0x30db78: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30db78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30db7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30db7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db80: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30db80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30db84: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30DB84u;
    SET_GPR_U32(ctx, 31, 0x30DB8Cu);
    ctx->pc = 0x30DB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB84u;
            // 0x30db88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB8Cu; }
        if (ctx->pc != 0x30DB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DB8Cu; }
        if (ctx->pc != 0x30DB8Cu) { return; }
    }
    ctx->pc = 0x30DB8Cu;
label_30db8c:
    // 0x30db8c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x30DB8Cu;
    {
        const bool branch_taken_0x30db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30db8c) {
            ctx->pc = 0x30DBECu;
            goto label_30dbec;
        }
    }
    ctx->pc = 0x30DB94u;
label_30db94:
    // 0x30db94: 0x2a620026  slti        $v0, $s3, 0x26
    ctx->pc = 0x30db94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x30db98: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30DB98u;
    {
        const bool branch_taken_0x30db98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DB98u;
            // 0x30db9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30db98) {
            ctx->pc = 0x30DBE0u;
            goto label_30dbe0;
        }
    }
    ctx->pc = 0x30DBA0u;
    // 0x30dba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30dba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dba4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30DBA4u;
    SET_GPR_U32(ctx, 31, 0x30DBACu);
    ctx->pc = 0x30DBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBA4u;
            // 0x30dba8: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBACu; }
        if (ctx->pc != 0x30DBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBACu; }
        if (ctx->pc != 0x30DBACu) { return; }
    }
    ctx->pc = 0x30DBACu;
label_30dbac:
    // 0x30dbac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30dbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dbb0: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x30dbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x30dbb4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30DBB4u;
    SET_GPR_U32(ctx, 31, 0x30DBBCu);
    ctx->pc = 0x30DBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBB4u;
            // 0x30dbb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBBCu; }
        if (ctx->pc != 0x30DBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBBCu; }
        if (ctx->pc != 0x30DBBCu) { return; }
    }
    ctx->pc = 0x30DBBCu;
label_30dbbc:
    // 0x30dbbc: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30dbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30dbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30dbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dbc4: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30dbc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30dbc8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30DBC8u;
    SET_GPR_U32(ctx, 31, 0x30DBD0u);
    ctx->pc = 0x30DBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBC8u;
            // 0x30dbcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBD0u; }
        if (ctx->pc != 0x30DBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DBD0u; }
        if (ctx->pc != 0x30DBD0u) { return; }
    }
    ctx->pc = 0x30DBD0u;
label_30dbd0:
    // 0x30dbd0: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x30dbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x30dbd4: 0x2a010184  slti        $at, $s0, 0x184
    ctx->pc = 0x30dbd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)388) ? 1 : 0);
    // 0x30dbd8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x30DBD8u;
    {
        const bool branch_taken_0x30dbd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBD8u;
            // 0x30dbdc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbd8) {
            ctx->pc = 0x30DBECu;
            goto label_30dbec;
        }
    }
    ctx->pc = 0x30DBE0u;
label_30dbe0:
    // 0x30dbe0: 0x2a420672  slti        $v0, $s2, 0x672
    ctx->pc = 0x30dbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1650) ? 1 : 0);
    // 0x30dbe4: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x30DBE4u;
    {
        const bool branch_taken_0x30dbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBE4u;
            // 0x30dbe8: 0x27d1021  addu        $v0, $s3, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbe4) {
            ctx->pc = 0x30DAACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30daac;
        }
    }
    ctx->pc = 0x30DBECu;
label_30dbec:
    // 0x30dbec: 0x0  nop
    ctx->pc = 0x30dbecu;
    // NOP
    // 0x30dbf0: 0x8f82a1e0  lw          $v0, -0x5E20($gp)
    ctx->pc = 0x30dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x30dbf4: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x30dbf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30dbf8: 0xc08878c  jal         func_221E30
    ctx->pc = 0x30DBF8u;
    SET_GPR_U32(ctx, 31, 0x30DC00u);
    ctx->pc = 0x30DBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DBF8u;
            // 0x30dbfc: 0x2784a1dc  addiu       $a0, $gp, -0x5E24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC00u; }
        if (ctx->pc != 0x30DC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC00u; }
        if (ctx->pc != 0x30DC00u) { return; }
    }
    ctx->pc = 0x30DC00u;
label_30dc00:
    // 0x30dc00: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x30dc00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x30dc04: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x30DC04u;
    {
        const bool branch_taken_0x30dc04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC04u;
            // 0x30dc08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc04) {
            ctx->pc = 0x30DC78u;
            goto label_30dc78;
        }
    }
    ctx->pc = 0x30DC0Cu;
    // 0x30dc0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30dc0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30dc10:
    // 0x30dc10: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x30dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x30dc14: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x30dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x30dc18: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x30dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x30dc1c: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x30dc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x30dc20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30dc20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30dc24: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x30dc24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30dc28: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30DC28u;
    SET_GPR_U32(ctx, 31, 0x30DC30u);
    ctx->pc = 0x30DC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC28u;
            // 0x30dc2c: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC30u; }
        if (ctx->pc != 0x30DC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC30u; }
        if (ctx->pc != 0x30DC30u) { return; }
    }
    ctx->pc = 0x30DC30u;
label_30dc30:
    // 0x30dc30: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x30dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x30dc34: 0x240501e2  addiu       $a1, $zero, 0x1E2
    ctx->pc = 0x30dc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 482));
    // 0x30dc38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30dc38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dc3c: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x30dc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30dc40: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30DC40u;
    SET_GPR_U32(ctx, 31, 0x30DC48u);
    ctx->pc = 0x30DC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC40u;
            // 0x30dc44: 0x2408001c  addiu       $t0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC48u; }
        if (ctx->pc != 0x30DC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC48u; }
        if (ctx->pc != 0x30DC48u) { return; }
    }
    ctx->pc = 0x30DC48u;
label_30dc48:
    // 0x30dc48: 0x8f84a1e0  lw          $a0, -0x5E20($gp)
    ctx->pc = 0x30dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943200)));
    // 0x30dc4c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x30dc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30dc50: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x30dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x30dc54: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x30dc54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x30dc58: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x30dc58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dc5c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x30dc5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dc60: 0xc088004  jal         func_220010
    ctx->pc = 0x30DC60u;
    SET_GPR_U32(ctx, 31, 0x30DC68u);
    ctx->pc = 0x30DC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC60u;
            // 0x30dc64: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC68u; }
        if (ctx->pc != 0x30DC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC68u; }
        if (ctx->pc != 0x30DC68u) { return; }
    }
    ctx->pc = 0x30DC68u;
label_30dc68:
    // 0x30dc68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30dc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30dc6c: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x30dc6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x30dc70: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x30DC70u;
    {
        const bool branch_taken_0x30dc70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC70u;
            // 0x30dc74: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc70) {
            ctx->pc = 0x30DC10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30dc10;
        }
    }
    ctx->pc = 0x30DC78u;
label_30dc78:
    // 0x30dc78: 0x8f83a1f0  lw          $v1, -0x5E10($gp)
    ctx->pc = 0x30dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943216)));
    // 0x30dc7c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x30DC7Cu;
    {
        const bool branch_taken_0x30dc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dc7c) {
            ctx->pc = 0x30DD68u;
            goto label_30dd68;
        }
    }
    ctx->pc = 0x30DC84u;
    // 0x30dc84: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x30dc84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30dc88: 0xc08878c  jal         func_221E30
    ctx->pc = 0x30DC88u;
    SET_GPR_U32(ctx, 31, 0x30DC90u);
    ctx->pc = 0x30DC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC88u;
            // 0x30dc8c: 0x2784a1dc  addiu       $a0, $gp, -0x5E24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC90u; }
        if (ctx->pc != 0x30DC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DC90u; }
        if (ctx->pc != 0x30DC90u) { return; }
    }
    ctx->pc = 0x30DC90u;
label_30dc90:
    // 0x30dc90: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x30dc90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x30dc94: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x30DC94u;
    {
        const bool branch_taken_0x30dc94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DC94u;
            // 0x30dc98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dc94) {
            ctx->pc = 0x30DD68u;
            goto label_30dd68;
        }
    }
    ctx->pc = 0x30DC9Cu;
    // 0x30dc9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30dc9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dca0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30dca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30dca4:
    // 0x30dca4: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x30dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x30dca8: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x30dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x30dcac: 0x24660090  addiu       $a2, $v1, 0x90
    ctx->pc = 0x30dcacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x30dcb0: 0x24450130  addiu       $a1, $v0, 0x130
    ctx->pc = 0x30dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x30dcb4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x30dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30dcb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30dcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dcbc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x30dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30dcc0: 0x24720003  addiu       $s2, $v1, 0x3
    ctx->pc = 0x30dcc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x30dcc4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30DCC4u;
    SET_GPR_U32(ctx, 31, 0x30DCCCu);
    ctx->pc = 0x30DCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCC4u;
            // 0x30dcc8: 0x24560006  addiu       $s6, $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCCCu; }
        if (ctx->pc != 0x30DCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCCCu; }
        if (ctx->pc != 0x30DCCCu) { return; }
    }
    ctx->pc = 0x30DCCCu;
label_30dccc:
    // 0x30dccc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30dcccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dcd0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30dcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dcd4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30DCD4u;
    SET_GPR_U32(ctx, 31, 0x30DCDCu);
    ctx->pc = 0x30DCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCD4u;
            // 0x30dcd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCDCu; }
        if (ctx->pc != 0x30DCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCDCu; }
        if (ctx->pc != 0x30DCDCu) { return; }
    }
    ctx->pc = 0x30DCDCu;
label_30dcdc:
    // 0x30dcdc: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30dcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30dce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30dce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dce4: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30dce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30dce8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30DCE8u;
    SET_GPR_U32(ctx, 31, 0x30DCF0u);
    ctx->pc = 0x30DCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCE8u;
            // 0x30dcec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCF0u; }
        if (ctx->pc != 0x30DCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DCF0u; }
        if (ctx->pc != 0x30DCF0u) { return; }
    }
    ctx->pc = 0x30DCF0u;
label_30dcf0:
    // 0x30dcf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30dcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30dcf4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x30dcf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x30dcf8: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x30dcf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x30dcfc: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x30DCFCu;
    {
        const bool branch_taken_0x30dcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DCFCu;
            // 0x30dd00: 0x26940003  addiu       $s4, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dcfc) {
            ctx->pc = 0x30DCA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30dca4;
        }
    }
    ctx->pc = 0x30DD04u;
    // 0x30dd04: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30DD04u;
    {
        const bool branch_taken_0x30dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30dd04) {
            ctx->pc = 0x30DD68u;
            goto label_30dd68;
        }
    }
    ctx->pc = 0x30DD0Cu;
label_30dd0c:
    // 0x30dd0c: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x30dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x30dd10: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30DD10u;
    SET_GPR_U32(ctx, 31, 0x30DD18u);
    ctx->pc = 0x30DD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD10u;
            // 0x30dd14: 0x240600f4  addiu       $a2, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD18u; }
        if (ctx->pc != 0x30DD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD18u; }
        if (ctx->pc != 0x30DD18u) { return; }
    }
    ctx->pc = 0x30DD18u;
label_30dd18:
    // 0x30dd18: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x30dd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30dd1c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30DD1Cu;
    SET_GPR_U32(ctx, 31, 0x30DD24u);
    ctx->pc = 0x30DD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD1Cu;
            // 0x30dd20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD24u; }
        if (ctx->pc != 0x30DD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD24u; }
        if (ctx->pc != 0x30DD24u) { return; }
    }
    ctx->pc = 0x30DD24u;
label_30dd24:
    // 0x30dd24: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30dd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30dd28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30dd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd2c: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30dd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30dd30: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30DD30u;
    SET_GPR_U32(ctx, 31, 0x30DD38u);
    ctx->pc = 0x30DD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD30u;
            // 0x30dd34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD38u; }
        if (ctx->pc != 0x30DD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD38u; }
        if (ctx->pc != 0x30DD38u) { return; }
    }
    ctx->pc = 0x30DD38u;
label_30dd38:
    // 0x30dd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30dd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd3c: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x30dd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x30dd40: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x30DD40u;
    SET_GPR_U32(ctx, 31, 0x30DD48u);
    ctx->pc = 0x30DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD40u;
            // 0x30dd44: 0x24060124  addiu       $a2, $zero, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD48u; }
        if (ctx->pc != 0x30DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD48u; }
        if (ctx->pc != 0x30DD48u) { return; }
    }
    ctx->pc = 0x30DD48u;
label_30dd48:
    // 0x30dd48: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x30dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x30dd4c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x30DD4Cu;
    SET_GPR_U32(ctx, 31, 0x30DD54u);
    ctx->pc = 0x30DD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD4Cu;
            // 0x30dd50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD54u; }
        if (ctx->pc != 0x30DD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD54u; }
        if (ctx->pc != 0x30DD54u) { return; }
    }
    ctx->pc = 0x30DD54u;
label_30dd54:
    // 0x30dd54: 0x8e260094  lw          $a2, 0x94($s1)
    ctx->pc = 0x30dd54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x30dd58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30dd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd5c: 0x8e270098  lw          $a3, 0x98($s1)
    ctx->pc = 0x30dd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x30dd60: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x30DD60u;
    SET_GPR_U32(ctx, 31, 0x30DD68u);
    ctx->pc = 0x30DD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD60u;
            // 0x30dd64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD68u; }
        if (ctx->pc != 0x30DD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30DD68u; }
        if (ctx->pc != 0x30DD68u) { return; }
    }
    ctx->pc = 0x30DD68u;
label_30dd68:
    // 0x30dd68: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x30dd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_30dd6c:
    // 0x30dd6c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x30dd6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30dd70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x30dd70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30dd74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30dd74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30dd78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30dd78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30dd7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30dd7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30dd80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30dd80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30dd84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30dd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dd88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30dd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x30DD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30DD8Cu;
            // 0x30dd90: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30DD94u;
}
