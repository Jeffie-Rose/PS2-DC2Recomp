#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadGameInfo__FP9mgCMemory
// Address: 0x31a540 - 0x31a6f4
void LoadGameInfo__FP9mgCMemory_0x31a540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadGameInfo__FP9mgCMemory_0x31a540");
#endif

    switch (ctx->pc) {
        case 0x31a570u: goto label_31a570;
        case 0x31a588u: goto label_31a588;
        case 0x31a598u: goto label_31a598;
        case 0x31a644u: goto label_31a644;
        case 0x31a674u: goto label_31a674;
        case 0x31a68cu: goto label_31a68c;
        case 0x31a6a4u: goto label_31a6a4;
        case 0x31a6b4u: goto label_31a6b4;
        case 0x31a6c4u: goto label_31a6c4;
        case 0x31a6dcu: goto label_31a6dc;
        default: break;
    }

    ctx->pc = 0x31a540u;

    // 0x31a540: 0x3c01fffe  lui         $at, 0xFFFE
    ctx->pc = 0x31a540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65534 << 16));
    // 0x31a544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31a544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a548: 0x34216100  ori         $at, $at, 0x6100
    ctx->pc = 0x31a548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24832);
    // 0x31a54c: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x31a54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x31a550: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a554: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31a554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31a558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a55c: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x31a55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x31a560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31a560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a564: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31a564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31a568: 0xc0524dc  jal         func_149370
    ctx->pc = 0x31A568u;
    SET_GPR_U32(ctx, 31, 0x31A570u);
    ctx->pc = 0x31A56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A568u;
            // 0x31a56c: 0x24842b00  addiu       $a0, $a0, 0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A570u; }
        if (ctx->pc != 0x31A570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A570u; }
        if (ctx->pc != 0x31A570u) { return; }
    }
    ctx->pc = 0x31A570u;
label_31a570:
    // 0x31a570: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x31A570u;
    {
        const bool branch_taken_0x31a570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a570) {
            ctx->pc = 0x31A6DCu;
            goto label_31a6dc;
        }
    }
    ctx->pc = 0x31A578u;
    // 0x31a578: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x31a578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x31a57c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31a580: 0xc0c67a0  jal         func_319E80
    ctx->pc = 0x31A580u;
    SET_GPR_U32(ctx, 31, 0x31A588u);
    ctx->pc = 0x31A584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A580u;
            // 0x31a584: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319E80u;
    if (runtime->hasFunction(0x319E80u)) {
        auto targetFn = runtime->lookupFunction(0x319E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A588u; }
        if (ctx->pc != 0x31A588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadPlaceInfo__FPciP9mgCMemory_0x319e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A588u; }
        if (ctx->pc != 0x31A588u) { return; }
    }
    ctx->pc = 0x31A588u;
label_31a588:
    // 0x31a588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a58c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31a58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a590: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x31a590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
    // 0x31a594: 0x24633bd0  addiu       $v1, $v1, 0x3BD0
    ctx->pc = 0x31a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15312));
label_31a598:
    // 0x31a598: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x31a598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31a59c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x31a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x31a5a0: 0xa4c00002  sh          $zero, 0x2($a2)
    ctx->pc = 0x31a5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5a4: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x31a5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31a5a8: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x31a5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5ac: 0x24a50060  addiu       $a1, $a1, 0x60
    ctx->pc = 0x31a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x31a5b0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x31a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x31a5b4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x31a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x31a5b8: 0xa4c0000e  sh          $zero, 0xE($a2)
    ctx->pc = 0x31a5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5bc: 0xa4c0000c  sh          $zero, 0xC($a2)
    ctx->pc = 0x31a5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5c0: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x31a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x31a5c4: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x31a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x31a5c8: 0xa4c0001a  sh          $zero, 0x1A($a2)
    ctx->pc = 0x31a5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5cc: 0xa4c00018  sh          $zero, 0x18($a2)
    ctx->pc = 0x31a5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5d0: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x31a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x31a5d4: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x31a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
    // 0x31a5d8: 0xa4c00026  sh          $zero, 0x26($a2)
    ctx->pc = 0x31a5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5dc: 0xa4c00024  sh          $zero, 0x24($a2)
    ctx->pc = 0x31a5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5e0: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x31a5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
    // 0x31a5e4: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x31a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x31a5e8: 0xa4c00032  sh          $zero, 0x32($a2)
    ctx->pc = 0x31a5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5ec: 0xa4c00030  sh          $zero, 0x30($a2)
    ctx->pc = 0x31a5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5f0: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x31a5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
    // 0x31a5f4: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x31a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x31a5f8: 0xa4c0003e  sh          $zero, 0x3E($a2)
    ctx->pc = 0x31a5f8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a5fc: 0xa4c0003c  sh          $zero, 0x3C($a2)
    ctx->pc = 0x31a5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a600: 0xacc00044  sw          $zero, 0x44($a2)
    ctx->pc = 0x31a600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
    // 0x31a604: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x31a604u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
    // 0x31a608: 0xa4c0004a  sh          $zero, 0x4A($a2)
    ctx->pc = 0x31a608u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a60c: 0xa4c00048  sh          $zero, 0x48($a2)
    ctx->pc = 0x31a60cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a610: 0xacc00050  sw          $zero, 0x50($a2)
    ctx->pc = 0x31a610u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 0));
    // 0x31a614: 0xacc0004c  sw          $zero, 0x4C($a2)
    ctx->pc = 0x31a614u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 76), GPR_U32(ctx, 0));
    // 0x31a618: 0xa4c00056  sh          $zero, 0x56($a2)
    ctx->pc = 0x31a618u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a61c: 0xa4c00054  sh          $zero, 0x54($a2)
    ctx->pc = 0x31a61cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x31a620: 0xacc0005c  sw          $zero, 0x5C($a2)
    ctx->pc = 0x31a620u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 92), GPR_U32(ctx, 0));
    // 0x31a624: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x31A624u;
    {
        const bool branch_taken_0x31a624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A624u;
            // 0x31a628: 0xacc00058  sw          $zero, 0x58($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a624) {
            ctx->pc = 0x31A598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31a598;
        }
    }
    ctx->pc = 0x31A62Cu;
    // 0x31a62c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31a630: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31a630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31a634: 0x24842b10  addiu       $a0, $a0, 0x2B10
    ctx->pc = 0x31a634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11024));
    // 0x31a638: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x31a638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x31a63c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x31A63Cu;
    SET_GPR_U32(ctx, 31, 0x31A644u);
    ctx->pc = 0x31A640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A63Cu;
            // 0x31a640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A644u; }
        if (ctx->pc != 0x31A644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A644u; }
        if (ctx->pc != 0x31A644u) { return; }
    }
    ctx->pc = 0x31A644u;
label_31a644:
    // 0x31a644: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31A644u;
    {
        const bool branch_taken_0x31a644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a644) {
            ctx->pc = 0x31A6DCu;
            goto label_31a6dc;
        }
    }
    ctx->pc = 0x31A64Cu;
    // 0x31a64c: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x31a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x31a650: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x31a650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x31a654: 0x24423bd0  addiu       $v0, $v0, 0x3BD0
    ctx->pc = 0x31a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15312));
    // 0x31a658: 0x34219030  ori         $at, $at, 0x9030
    ctx->pc = 0x31a658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36912);
    // 0x31a65c: 0xaf82a378  sw          $v0, -0x5C88($gp)
    ctx->pc = 0x31a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943608), GPR_U32(ctx, 2));
    // 0x31a660: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x31a660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x31a664: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x31a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31a668: 0xaf90a37c  sw          $s0, -0x5C84($gp)
    ctx->pc = 0x31a668u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943612), GPR_U32(ctx, 16));
    // 0x31a66c: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x31A66Cu;
    SET_GPR_U32(ctx, 31, 0x31A674u);
    ctx->pc = 0x31A670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A66Cu;
            // 0x31a670: 0xaf82a340  sw          $v0, -0x5CC0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A674u; }
        if (ctx->pc != 0x31A674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A674u; }
        if (ctx->pc != 0x31A674u) { return; }
    }
    ctx->pc = 0x31A674u;
label_31a674:
    // 0x31a674: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x31a674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x31a678: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x31a678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x31a67c: 0x34219030  ori         $at, $at, 0x9030
    ctx->pc = 0x31a67cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36912);
    // 0x31a680: 0x24a5e860  addiu       $a1, $a1, -0x17A0
    ctx->pc = 0x31a680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961248));
    // 0x31a684: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x31A684u;
    SET_GPR_U32(ctx, 31, 0x31A68Cu);
    ctx->pc = 0x31A688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A684u;
            // 0x31a688: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A68Cu; }
        if (ctx->pc != 0x31A68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A68Cu; }
        if (ctx->pc != 0x31A68Cu) { return; }
    }
    ctx->pc = 0x31A68Cu;
label_31a68c:
    // 0x31a68c: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x31a68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x31a690: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x31a690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x31a694: 0x34219030  ori         $at, $at, 0x9030
    ctx->pc = 0x31a694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36912);
    // 0x31a698: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31a698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31a69c: 0xc051a60  jal         func_146980
    ctx->pc = 0x31A69Cu;
    SET_GPR_U32(ctx, 31, 0x31A6A4u);
    ctx->pc = 0x31A6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A69Cu;
            // 0x31a6a0: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A6A4u; }
        if (ctx->pc != 0x31A6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A6A4u; }
        if (ctx->pc != 0x31A6A4u) { return; }
    }
    ctx->pc = 0x31A6A4u;
label_31a6a4:
    // 0x31a6a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x31a6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x31a6a8: 0x34219030  ori         $at, $at, 0x9030
    ctx->pc = 0x31a6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36912);
    // 0x31a6ac: 0xc0519c8  jal         func_146720
    ctx->pc = 0x31A6ACu;
    SET_GPR_U32(ctx, 31, 0x31A6B4u);
    ctx->pc = 0x31A6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A6ACu;
            // 0x31a6b0: 0x3a12021  addu        $a0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A6B4u; }
        if (ctx->pc != 0x31A6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A6B4u; }
        if (ctx->pc != 0x31A6B4u) { return; }
    }
    ctx->pc = 0x31A6B4u;
label_31a6b4:
    // 0x31a6b4: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x31a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x31a6b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31a6bc: 0xc0c677c  jal         func_319DF0
    ctx->pc = 0x31A6BCu;
    SET_GPR_U32(ctx, 31, 0x31A6C4u);
    ctx->pc = 0x31A6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A6BCu;
            // 0x31a6c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319DF0u;
    if (runtime->hasFunction(0x319DF0u)) {
        auto targetFn = runtime->lookupFunction(0x319DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A6C4u; }
        if (ctx->pc != 0x31A6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadNPCInfo__FPciP9mgCMemory_0x319df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A6C4u; }
        if (ctx->pc != 0x31A6C4u) { return; }
    }
    ctx->pc = 0x31A6C4u;
label_31a6c4:
    // 0x31a6c4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x31a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x31a6c8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31a6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31a6cc: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x31a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x31a6d0: 0x24842b20  addiu       $a0, $a0, 0x2B20
    ctx->pc = 0x31a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11040));
    // 0x31a6d4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31A6D4u;
    SET_GPR_U32(ctx, 31, 0x31A6DCu);
    ctx->pc = 0x31A6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A6D4u;
            // 0x31a6d8: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A6DCu; }
        if (ctx->pc != 0x31A6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A6DCu; }
        if (ctx->pc != 0x31A6DCu) { return; }
    }
    ctx->pc = 0x31A6DCu;
label_31a6dc:
    // 0x31a6dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a6e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x31a6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x31a6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a6e8: 0x34219f00  ori         $at, $at, 0x9F00
    ctx->pc = 0x31a6e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40704);
    // 0x31a6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x31A6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A6ECu;
            // 0x31a6f0: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A6F4u;
}
