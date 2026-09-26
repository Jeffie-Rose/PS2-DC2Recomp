#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MsgPreset__7CDC2MesFi
// Address: 0x21d3a0 - 0x21d680
void MsgPreset__7CDC2MesFi_0x21d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MsgPreset__7CDC2MesFi_0x21d3a0");
#endif

    switch (ctx->pc) {
        case 0x21d3bcu: goto label_21d3bc;
        case 0x21d3c8u: goto label_21d3c8;
        case 0x21d400u: goto label_21d400;
        case 0x21d430u: goto label_21d430;
        case 0x21d444u: goto label_21d444;
        case 0x21d45cu: goto label_21d45c;
        case 0x21d470u: goto label_21d470;
        case 0x21d4a8u: goto label_21d4a8;
        case 0x21d4d0u: goto label_21d4d0;
        case 0x21d4f0u: goto label_21d4f0;
        case 0x21d504u: goto label_21d504;
        case 0x21d520u: goto label_21d520;
        case 0x21d54cu: goto label_21d54c;
        case 0x21d564u: goto label_21d564;
        case 0x21d598u: goto label_21d598;
        case 0x21d5b8u: goto label_21d5b8;
        case 0x21d5d4u: goto label_21d5d4;
        case 0x21d608u: goto label_21d608;
        case 0x21d61cu: goto label_21d61c;
        case 0x21d63cu: goto label_21d63c;
        case 0x21d660u: goto label_21d660;
        default: break;
    }

    ctx->pc = 0x21d3a0u;

    // 0x21d3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d3a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d3a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d3ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d3b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d3b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3b4: 0xc0873e4  jal         func_21CF90
    ctx->pc = 0x21D3B4u;
    SET_GPR_U32(ctx, 31, 0x21D3BCu);
    ctx->pc = 0x21D3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D3B4u;
            // 0x21d3b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF90u;
    if (runtime->hasFunction(0x21CF90u)) {
        auto targetFn = runtime->lookupFunction(0x21CF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D3BCu; }
        if (ctx->pc != 0x21D3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMesInit__FP6ClsMes_0x21cf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D3BCu; }
        if (ctx->pc != 0x21D3BCu) { return; }
    }
    ctx->pc = 0x21D3BCu;
label_21d3bc:
    // 0x21d3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3c0: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x21D3C0u;
    SET_GPR_U32(ctx, 31, 0x21D3C8u);
    ctx->pc = 0x21D3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D3C0u;
            // 0x21d3c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D3C8u; }
        if (ctx->pc != 0x21D3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D3C8u; }
        if (ctx->pc != 0x21D3C8u) { return; }
    }
    ctx->pc = 0x21D3C8u;
label_21d3c8:
    // 0x21d3c8: 0xa62021e6  sh          $zero, 0x21E6($s1)
    ctx->pc = 0x21d3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8678), (uint16_t)GPR_U32(ctx, 0));
    // 0x21d3cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d3d0: 0xa2202200  sb          $zero, 0x2200($s1)
    ctx->pc = 0x21d3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8704), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d3d4: 0x262421f0  addiu       $a0, $s1, 0x21F0
    ctx->pc = 0x21d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8688));
    // 0x21d3d8: 0xa22221e8  sb          $v0, 0x21E8($s1)
    ctx->pc = 0x21d3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8680), (uint8_t)GPR_U32(ctx, 2));
    // 0x21d3dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3e0: 0xa22021e9  sb          $zero, 0x21E9($s1)
    ctx->pc = 0x21d3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8681), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d3e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3e8: 0xa22021ea  sb          $zero, 0x21EA($s1)
    ctx->pc = 0x21d3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8682), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d3ec: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x21d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x21d3f0: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x21d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x21d3f4: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x21d3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21d3f8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x21D3F8u;
    SET_GPR_U32(ctx, 31, 0x21D400u);
    ctx->pc = 0x21D3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D3F8u;
            // 0x21d3fc: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D400u; }
        if (ctx->pc != 0x21D400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D400u; }
        if (ctx->pc != 0x21D400u) { return; }
    }
    ctx->pc = 0x21D400u;
label_21d400:
    // 0x21d400: 0x2e010014  sltiu       $at, $s0, 0x14
    ctx->pc = 0x21d400u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x21d404: 0x10200099  beqz        $at, . + 4 + (0x99 << 2)
    ctx->pc = 0x21D404u;
    {
        const bool branch_taken_0x21d404 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D404u;
            // 0x21d408: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d404) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D40Cu;
    // 0x21d40c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x21d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21d410: 0x2484a4f0  addiu       $a0, $a0, -0x5B10
    ctx->pc = 0x21d410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943984));
    // 0x21d414: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21d418: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21d418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d41c: 0x600008  jr          $v1
    ctx->pc = 0x21D41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D424u: goto label_21d424;
            case 0x21D438u: goto label_21d438;
            case 0x21D450u: goto label_21d450;
            case 0x21D464u: goto label_21d464;
            case 0x21D49Cu: goto label_21d49c;
            case 0x21D4C4u: goto label_21d4c4;
            case 0x21D4F8u: goto label_21d4f8;
            case 0x21D530u: goto label_21d530;
            case 0x21D558u: goto label_21d558;
            case 0x21D58Cu: goto label_21d58c;
            case 0x21D5ACu: goto label_21d5ac;
            case 0x21D5C8u: goto label_21d5c8;
            case 0x21D5FCu: goto label_21d5fc;
            case 0x21D610u: goto label_21d610;
            case 0x21D630u: goto label_21d630;
            case 0x21D654u: goto label_21d654;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21D424u;
label_21d424:
    // 0x21d424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d428: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D428u;
    SET_GPR_U32(ctx, 31, 0x21D430u);
    ctx->pc = 0x21D42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D428u;
            // 0x21d42c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D430u; }
        if (ctx->pc != 0x21D430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D430u; }
        if (ctx->pc != 0x21D430u) { return; }
    }
    ctx->pc = 0x21D430u;
label_21d430:
    // 0x21d430: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x21D430u;
    {
        const bool branch_taken_0x21d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D430u;
            // 0x21d434: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d430) {
            ctx->pc = 0x21D670u;
            goto label_21d670;
        }
    }
    ctx->pc = 0x21D438u;
label_21d438:
    // 0x21d438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d43c: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D43Cu;
    SET_GPR_U32(ctx, 31, 0x21D444u);
    ctx->pc = 0x21D440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D43Cu;
            // 0x21d440: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D444u; }
        if (ctx->pc != 0x21D444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D444u; }
        if (ctx->pc != 0x21D444u) { return; }
    }
    ctx->pc = 0x21D444u;
label_21d444:
    // 0x21d444: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x21d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21d448: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x21D448u;
    {
        const bool branch_taken_0x21d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D448u;
            // 0x21d44c: 0xae2300b0  sw          $v1, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d448) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D450u;
label_21d450:
    // 0x21d450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d454: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D454u;
    SET_GPR_U32(ctx, 31, 0x21D45Cu);
    ctx->pc = 0x21D458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D454u;
            // 0x21d458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D45Cu; }
        if (ctx->pc != 0x21D45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D45Cu; }
        if (ctx->pc != 0x21D45Cu) { return; }
    }
    ctx->pc = 0x21D45Cu;
label_21d45c:
    // 0x21d45c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x21D45Cu;
    {
        const bool branch_taken_0x21d45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d45c) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D464u;
label_21d464:
    // 0x21d464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d468: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D468u;
    SET_GPR_U32(ctx, 31, 0x21D470u);
    ctx->pc = 0x21D46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D468u;
            // 0x21d46c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D470u; }
        if (ctx->pc != 0x21D470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D470u; }
        if (ctx->pc != 0x21D470u) { return; }
    }
    ctx->pc = 0x21D470u;
label_21d470:
    // 0x21d470: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x21d470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x21d474: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x21d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x21d478: 0xae240198  sw          $a0, 0x198($s1)
    ctx->pc = 0x21d478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 4));
    // 0x21d47c: 0xae23019c  sw          $v1, 0x19C($s1)
    ctx->pc = 0x21d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 412), GPR_U32(ctx, 3));
    // 0x21d480: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21d480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21d484: 0xa62421e2  sh          $a0, 0x21E2($s1)
    ctx->pc = 0x21d484u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8674), (uint16_t)GPR_U32(ctx, 4));
    // 0x21d488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d48c: 0xa62421e4  sh          $a0, 0x21E4($s1)
    ctx->pc = 0x21d48cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8676), (uint16_t)GPR_U32(ctx, 4));
    // 0x21d490: 0xae231ac8  sw          $v1, 0x1AC8($s1)
    ctx->pc = 0x21d490u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6856), GPR_U32(ctx, 3));
    // 0x21d494: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x21D494u;
    {
        const bool branch_taken_0x21d494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D494u;
            // 0x21d498: 0xae2017f8  sw          $zero, 0x17F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d494) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D49Cu;
label_21d49c:
    // 0x21d49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4a0: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D4A0u;
    SET_GPR_U32(ctx, 31, 0x21D4A8u);
    ctx->pc = 0x21D4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4A0u;
            // 0x21d4a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4A8u; }
        if (ctx->pc != 0x21D4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4A8u; }
        if (ctx->pc != 0x21D4A8u) { return; }
    }
    ctx->pc = 0x21D4A8u;
label_21d4a8:
    // 0x21d4a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21d4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d4ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x21d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21d4b0: 0xae2400d0  sw          $a0, 0xD0($s1)
    ctx->pc = 0x21d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 4));
    // 0x21d4b4: 0x1603006d  bne         $s0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x21D4B4u;
    {
        const bool branch_taken_0x21d4b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4B4u;
            // 0x21d4b8: 0xae241ac8  sw          $a0, 0x1AC8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6856), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4b4) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D4BCu;
    // 0x21d4bc: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x21D4BCu;
    {
        const bool branch_taken_0x21d4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4BCu;
            // 0x21d4c0: 0xae2300b0  sw          $v1, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4bc) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D4C4u;
label_21d4c4:
    // 0x21d4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4c8: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D4C8u;
    SET_GPR_U32(ctx, 31, 0x21D4D0u);
    ctx->pc = 0x21D4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4C8u;
            // 0x21d4cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4D0u; }
        if (ctx->pc != 0x21D4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4D0u; }
        if (ctx->pc != 0x21D4D0u) { return; }
    }
    ctx->pc = 0x21D4D0u;
label_21d4d0:
    // 0x21d4d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d4d4: 0x3c028014  lui         $v0, 0x8014
    ctx->pc = 0x21d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32788 << 16));
    // 0x21d4d8: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x21d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
    // 0x21d4dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4e0: 0xae231acc  sw          $v1, 0x1ACC($s1)
    ctx->pc = 0x21d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6860), GPR_U32(ctx, 3));
    // 0x21d4e4: 0x34451414  ori         $a1, $v0, 0x1414
    ctx->pc = 0x21d4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5140);
    // 0x21d4e8: 0xc054bb0  jal         func_152EC0
    ctx->pc = 0x21D4E8u;
    SET_GPR_U32(ctx, 31, 0x21D4F0u);
    ctx->pc = 0x21D4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4E8u;
            // 0x21d4ec: 0xae2000b0  sw          $zero, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EC0u;
    if (runtime->hasFunction(0x152EC0u)) {
        auto targetFn = runtime->lookupFunction(0x152EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4F0u; }
        if (ctx->pc != 0x21D4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDefColor__6ClsMesFUi_0x152ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4F0u; }
        if (ctx->pc != 0x21D4F0u) { return; }
    }
    ctx->pc = 0x21D4F0u;
label_21d4f0:
    // 0x21d4f0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x21D4F0u;
    {
        const bool branch_taken_0x21d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d4f0) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D4F8u;
label_21d4f8:
    // 0x21d4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4fc: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D4FCu;
    SET_GPR_U32(ctx, 31, 0x21D504u);
    ctx->pc = 0x21D500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4FCu;
            // 0x21d500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D504u; }
        if (ctx->pc != 0x21D504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D504u; }
        if (ctx->pc != 0x21D504u) { return; }
    }
    ctx->pc = 0x21D504u;
label_21d504:
    // 0x21d504: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21d504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21d508: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d50c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x21d50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21d510: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21d510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d514: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21d514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d518: 0xc087698  jal         func_21DA60
    ctx->pc = 0x21D518u;
    SET_GPR_U32(ctx, 31, 0x21D520u);
    ctx->pc = 0x21D51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D518u;
            // 0x21d51c: 0xae2000b0  sw          $zero, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DA60u;
    if (runtime->hasFunction(0x21DA60u)) {
        auto targetFn = runtime->lookupFunction(0x21DA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D520u; }
        if (ctx->pc != 0x21D520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFontColor__7CDC2MesFiiii_0x21da60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D520u; }
        if (ctx->pc != 0x21D520u) { return; }
    }
    ctx->pc = 0x21D520u;
label_21d520:
    // 0x21d520: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d524: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x21d524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
    // 0x21d528: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x21D528u;
    {
        const bool branch_taken_0x21d528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D528u;
            // 0x21d52c: 0xae231acc  sw          $v1, 0x1ACC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6860), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d528) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D530u;
label_21d530:
    // 0x21d530: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x21d530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x21d534: 0x2402ffc4  addiu       $v0, $zero, -0x3C
    ctx->pc = 0x21d534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967236));
    // 0x21d538: 0xae2301a8  sw          $v1, 0x1A8($s1)
    ctx->pc = 0x21d538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 3));
    // 0x21d53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d540: 0xae2201ac  sw          $v0, 0x1AC($s1)
    ctx->pc = 0x21d540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
    // 0x21d544: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D544u;
    SET_GPR_U32(ctx, 31, 0x21D54Cu);
    ctx->pc = 0x21D548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D544u;
            // 0x21d548: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D54Cu; }
        if (ctx->pc != 0x21D54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D54Cu; }
        if (ctx->pc != 0x21D54Cu) { return; }
    }
    ctx->pc = 0x21D54Cu;
label_21d54c:
    // 0x21d54c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d550: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x21D550u;
    {
        const bool branch_taken_0x21d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D550u;
            // 0x21d554: 0xae231af8  sw          $v1, 0x1AF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d550) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D558u;
label_21d558:
    // 0x21d558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d55c: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D55Cu;
    SET_GPR_U32(ctx, 31, 0x21D564u);
    ctx->pc = 0x21D560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D55Cu;
            // 0x21d560: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D564u; }
        if (ctx->pc != 0x21D564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D564u; }
        if (ctx->pc != 0x21D564u) { return; }
    }
    ctx->pc = 0x21D564u;
label_21d564:
    // 0x21d564: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x21d564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x21d568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d56c: 0xae2317f4  sw          $v1, 0x17F4($s1)
    ctx->pc = 0x21d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6132), GPR_U32(ctx, 3));
    // 0x21d570: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x21d570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x21d574: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x21d574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21d578: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x21d578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x21d57c: 0x1603003b  bne         $s0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x21D57Cu;
    {
        const bool branch_taken_0x21d57c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D57Cu;
            // 0x21d580: 0xae240184  sw          $a0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d57c) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D584u;
    // 0x21d584: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x21D584u;
    {
        const bool branch_taken_0x21d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D584u;
            // 0x21d588: 0xae2017f4  sw          $zero, 0x17F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d584) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D58Cu;
label_21d58c:
    // 0x21d58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d590: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D590u;
    SET_GPR_U32(ctx, 31, 0x21D598u);
    ctx->pc = 0x21D594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D590u;
            // 0x21d594: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D598u; }
        if (ctx->pc != 0x21D598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D598u; }
        if (ctx->pc != 0x21D598u) { return; }
    }
    ctx->pc = 0x21D598u;
label_21d598:
    // 0x21d598: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x21d598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x21d59c: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x21d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x21d5a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21d5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21d5a4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21D5A4u;
    {
        const bool branch_taken_0x21d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5A4u;
            // 0x21d5a8: 0xae230184  sw          $v1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5a4) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D5ACu;
label_21d5ac:
    // 0x21d5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5b0: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D5B0u;
    SET_GPR_U32(ctx, 31, 0x21D5B8u);
    ctx->pc = 0x21D5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5B0u;
            // 0x21d5b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D5B8u; }
        if (ctx->pc != 0x21D5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D5B8u; }
        if (ctx->pc != 0x21D5B8u) { return; }
    }
    ctx->pc = 0x21D5B8u;
label_21d5b8:
    // 0x21d5b8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x21d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x21d5bc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21d5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21d5c0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x21D5C0u;
    {
        const bool branch_taken_0x21d5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5C0u;
            // 0x21d5c4: 0xae230184  sw          $v1, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5c0) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D5C8u;
label_21d5c8:
    // 0x21d5c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5cc: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D5CCu;
    SET_GPR_U32(ctx, 31, 0x21D5D4u);
    ctx->pc = 0x21D5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5CCu;
            // 0x21d5d0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D5D4u; }
        if (ctx->pc != 0x21D5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D5D4u; }
        if (ctx->pc != 0x21D5D4u) { return; }
    }
    ctx->pc = 0x21D5D4u;
label_21d5d4:
    // 0x21d5d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x21d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21d5d8: 0x16030024  bne         $s0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x21D5D8u;
    {
        const bool branch_taken_0x21d5d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5D8u;
            // 0x21d5dc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5d8) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D5E0u;
    // 0x21d5e0: 0x240400ec  addiu       $a0, $zero, 0xEC
    ctx->pc = 0x21d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x21d5e4: 0xa62521e2  sh          $a1, 0x21E2($s1)
    ctx->pc = 0x21d5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8674), (uint16_t)GPR_U32(ctx, 5));
    // 0x21d5e8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x21d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21d5ec: 0xa62521e4  sh          $a1, 0x21E4($s1)
    ctx->pc = 0x21d5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8676), (uint16_t)GPR_U32(ctx, 5));
    // 0x21d5f0: 0xae240198  sw          $a0, 0x198($s1)
    ctx->pc = 0x21d5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 4));
    // 0x21d5f4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x21D5F4u;
    {
        const bool branch_taken_0x21d5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5F4u;
            // 0x21d5f8: 0xae23019c  sw          $v1, 0x19C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 412), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5f4) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D5FCu;
label_21d5fc:
    // 0x21d5fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d600: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D600u;
    SET_GPR_U32(ctx, 31, 0x21D608u);
    ctx->pc = 0x21D604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D600u;
            // 0x21d604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D608u; }
        if (ctx->pc != 0x21D608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D608u; }
        if (ctx->pc != 0x21D608u) { return; }
    }
    ctx->pc = 0x21D608u;
label_21d608:
    // 0x21d608: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x21D608u;
    {
        const bool branch_taken_0x21d608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d608) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D610u;
label_21d610:
    // 0x21d610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d614: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D614u;
    SET_GPR_U32(ctx, 31, 0x21D61Cu);
    ctx->pc = 0x21D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D614u;
            // 0x21d618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D61Cu; }
        if (ctx->pc != 0x21D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D61Cu; }
        if (ctx->pc != 0x21D61Cu) { return; }
    }
    ctx->pc = 0x21D61Cu;
label_21d61c:
    // 0x21d61c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x21d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21d620: 0x16030012  bne         $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x21D620u;
    {
        const bool branch_taken_0x21d620 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x21D624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D620u;
            // 0x21d624: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d620) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D628u;
    // 0x21d628: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21D628u;
    {
        const bool branch_taken_0x21d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D628u;
            // 0x21d62c: 0xae2300b0  sw          $v1, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d628) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D630u;
label_21d630:
    // 0x21d630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d634: 0xc054cdc  jal         func_153370
    ctx->pc = 0x21D634u;
    SET_GPR_U32(ctx, 31, 0x21D63Cu);
    ctx->pc = 0x21D638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D634u;
            // 0x21d638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D63Cu; }
        if (ctx->pc != 0x21D63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D63Cu; }
        if (ctx->pc != 0x21D63Cu) { return; }
    }
    ctx->pc = 0x21D63Cu;
label_21d63c:
    // 0x21d63c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d640: 0xae231acc  sw          $v1, 0x1ACC($s1)
    ctx->pc = 0x21d640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6860), GPR_U32(ctx, 3));
    // 0x21d644: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x21d644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x21d648: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x21d648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x21d64c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21D64Cu;
    {
        const bool branch_taken_0x21d64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D64Cu;
            // 0x21d650: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d64c) {
            ctx->pc = 0x21D66Cu;
            goto label_21d66c;
        }
    }
    ctx->pc = 0x21D654u;
label_21d654:
    // 0x21d654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d658: 0xc054bb4  jal         func_152ED0
    ctx->pc = 0x21D658u;
    SET_GPR_U32(ctx, 31, 0x21D660u);
    ctx->pc = 0x21D65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D658u;
            // 0x21d65c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D660u; }
        if (ctx->pc != 0x21D660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D660u; }
        if (ctx->pc != 0x21D660u) { return; }
    }
    ctx->pc = 0x21D660u;
label_21d660:
    // 0x21d660: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x21d660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x21d664: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x21d664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x21d668: 0xae230184  sw          $v1, 0x184($s1)
    ctx->pc = 0x21d668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 3));
label_21d66c:
    // 0x21d66c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d66cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21d670:
    // 0x21d670: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d674: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d678: 0x3e00008  jr          $ra
    ctx->pc = 0x21D678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D678u;
            // 0x21d67c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D680u;
}
