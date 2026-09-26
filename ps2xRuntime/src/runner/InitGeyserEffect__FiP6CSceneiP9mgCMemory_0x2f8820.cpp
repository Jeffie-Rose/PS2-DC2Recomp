#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitGeyserEffect__FiP6CSceneiP9mgCMemory
// Address: 0x2f8820 - 0x2f8a30
void InitGeyserEffect__FiP6CSceneiP9mgCMemory_0x2f8820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitGeyserEffect__FiP6CSceneiP9mgCMemory_0x2f8820");
#endif

    switch (ctx->pc) {
        case 0x2f8868u: goto label_2f8868;
        case 0x2f8890u: goto label_2f8890;
        case 0x2f88a4u: goto label_2f88a4;
        case 0x2f88c4u: goto label_2f88c4;
        case 0x2f88dcu: goto label_2f88dc;
        case 0x2f88e8u: goto label_2f88e8;
        case 0x2f88f4u: goto label_2f88f4;
        case 0x2f8904u: goto label_2f8904;
        case 0x2f8914u: goto label_2f8914;
        case 0x2f8920u: goto label_2f8920;
        case 0x2f8930u: goto label_2f8930;
        case 0x2f8954u: goto label_2f8954;
        case 0x2f8960u: goto label_2f8960;
        case 0x2f897cu: goto label_2f897c;
        case 0x2f8988u: goto label_2f8988;
        case 0x2f8994u: goto label_2f8994;
        case 0x2f89a0u: goto label_2f89a0;
        case 0x2f89bcu: goto label_2f89bc;
        case 0x2f89ecu: goto label_2f89ec;
        case 0x2f8a10u: goto label_2f8a10;
        default: break;
    }

    ctx->pc = 0x2f8820u;

    // 0x2f8820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f8820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f8824: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f8824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f8828: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f882c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f882cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f8830: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f8830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f8834: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f8834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f8838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f883c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f883cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f8840: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f8840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8844: 0x14830073  bne         $a0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2F8844u;
    {
        const bool branch_taken_0x2f8844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F8848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8844u;
            // 0x2f8848: 0xaf809f38  sw          $zero, -0x60C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8844) {
            ctx->pc = 0x2F8A14u;
            goto label_2f8a14;
        }
    }
    ctx->pc = 0x2F884Cu;
    // 0x2f884c: 0x8cb2003c  lw          $s2, 0x3C($a1)
    ctx->pc = 0x2f884cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2f8850: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2f8850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2f8854: 0x24841ab0  addiu       $a0, $a0, 0x1AB0
    ctx->pc = 0x2f8854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6832));
    // 0x2f8858: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x2f8858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2f885c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f885cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8860: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2F8860u;
    SET_GPR_U32(ctx, 31, 0x2F8868u);
    ctx->pc = 0x2F8864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8860u;
            // 0x2f8864: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8868u; }
        if (ctx->pc != 0x2F8868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8868u; }
        if (ctx->pc != 0x2F8868u) { return; }
    }
    ctx->pc = 0x2F8868u;
label_2f8868:
    // 0x2f8868: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2F8868u;
    {
        const bool branch_taken_0x2f8868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8868) {
            ctx->pc = 0x2F8A14u;
            goto label_2f8a14;
        }
    }
    ctx->pc = 0x2F8870u;
    // 0x2f8870: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2f8870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2f8874: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2f8874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2f8878: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8878u;
    {
        const bool branch_taken_0x2f8878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8878u;
            // 0x2f887c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8878) {
            ctx->pc = 0x2F8888u;
            goto label_2f8888;
        }
    }
    ctx->pc = 0x2F8880u;
    // 0x2f8880: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2f8880u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2f8884: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2f8884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2f8888:
    // 0x2f8888: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F8888u;
    SET_GPR_U32(ctx, 31, 0x2F8890u);
    ctx->pc = 0x2F888Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8888u;
            // 0x2f888c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8890u; }
        if (ctx->pc != 0x2F8890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8890u; }
        if (ctx->pc != 0x2F8890u) { return; }
    }
    ctx->pc = 0x2F8890u;
label_2f8890:
    // 0x2f8890: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x2f8890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2f8894: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f8894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8898: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f8898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f889c: 0xc049c18  jal         func_127060
    ctx->pc = 0x2F889Cu;
    SET_GPR_U32(ctx, 31, 0x2F88A4u);
    ctx->pc = 0x2F88A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F889Cu;
            // 0x2f88a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F88A4u; }
        if (ctx->pc != 0x2F88A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F88A4u; }
        if (ctx->pc != 0x2F88A4u) { return; }
    }
    ctx->pc = 0x2F88A4u;
label_2f88a4:
    // 0x2f88a4: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2f88a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x2f88a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f88ac: 0x26521ef0  addiu       $s2, $s2, 0x1EF0
    ctx->pc = 0x2f88acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
    // 0x2f88b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f88b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88b4: 0xaf829f38  sw          $v0, -0x60C8($gp)
    ctx->pc = 0x2f88b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942520), GPR_U32(ctx, 2));
    // 0x2f88b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f88b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88bc: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2F88BCu;
    SET_GPR_U32(ctx, 31, 0x2F88C4u);
    ctx->pc = 0x2F88C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F88BCu;
            // 0x2f88c0: 0xaf939f3c  sw          $s3, -0x60C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942524), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F88C4u; }
        if (ctx->pc != 0x2F88C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F88C4u; }
        if (ctx->pc != 0x2F88C4u) { return; }
    }
    ctx->pc = 0x2F88C4u;
label_2f88c4:
    // 0x2f88c4: 0x8f869f3c  lw          $a2, -0x60C4($gp)
    ctx->pc = 0x2f88c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942524)));
    // 0x2f88c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f88c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f88ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f88d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88d4: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x2F88D4u;
    SET_GPR_U32(ctx, 31, 0x2F88DCu);
    ctx->pc = 0x2F88D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F88D4u;
            // 0x2f88d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F88DCu; }
        if (ctx->pc != 0x2F88DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F88DCu; }
        if (ctx->pc != 0x2F88DCu) { return; }
    }
    ctx->pc = 0x2F88DCu;
label_2f88dc:
    // 0x2f88dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f88dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88e0: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F88E0u;
    SET_GPR_U32(ctx, 31, 0x2F88E8u);
    ctx->pc = 0x2F88E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F88E0u;
            // 0x2f88e4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F88E8u; }
        if (ctx->pc != 0x2F88E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F88E8u; }
        if (ctx->pc != 0x2F88E8u) { return; }
    }
    ctx->pc = 0x2F88E8u;
label_2f88e8:
    // 0x2f88e8: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x2f88e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2f88ec: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2F88ECu;
    SET_GPR_U32(ctx, 31, 0x2F88F4u);
    ctx->pc = 0x2F88F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F88ECu;
            // 0x2f88f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F88F4u; }
        if (ctx->pc != 0x2F88F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F88F4u; }
        if (ctx->pc != 0x2F88F4u) { return; }
    }
    ctx->pc = 0x2F88F4u;
label_2f88f4:
    // 0x2f88f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F88F4u;
    {
        const bool branch_taken_0x2f88f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F88F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F88F4u;
            // 0x2f88f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88f4) {
            ctx->pc = 0x2F8904u;
            goto label_2f8904;
        }
    }
    ctx->pc = 0x2F88FCu;
    // 0x2f88fc: 0xc04d924  jal         func_136490
    ctx->pc = 0x2F88FCu;
    SET_GPR_U32(ctx, 31, 0x2F8904u);
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8904u; }
        if (ctx->pc != 0x2F8904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8904u; }
        if (ctx->pc != 0x2F8904u) { return; }
    }
    ctx->pc = 0x2F8904u;
label_2f8904:
    // 0x2f8904: 0xaf829f40  sw          $v0, -0x60C0($gp)
    ctx->pc = 0x2f8904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942528), GPR_U32(ctx, 2));
    // 0x2f8908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f890c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F890Cu;
    SET_GPR_U32(ctx, 31, 0x2F8914u);
    ctx->pc = 0x2F8910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F890Cu;
            // 0x2f8910: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8914u; }
        if (ctx->pc != 0x2F8914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8914u; }
        if (ctx->pc != 0x2F8914u) { return; }
    }
    ctx->pc = 0x2F8914u;
label_2f8914:
    // 0x2f8914: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x2f8914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8918: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2F8918u;
    SET_GPR_U32(ctx, 31, 0x2F8920u);
    ctx->pc = 0x2F891Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8918u;
            // 0x2f891c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8920u; }
        if (ctx->pc != 0x2F8920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8920u; }
        if (ctx->pc != 0x2F8920u) { return; }
    }
    ctx->pc = 0x2F8920u;
label_2f8920:
    // 0x2f8920: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8920u;
    {
        const bool branch_taken_0x2f8920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8920u;
            // 0x2f8924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8920) {
            ctx->pc = 0x2F8930u;
            goto label_2f8930;
        }
    }
    ctx->pc = 0x2F8928u;
    // 0x2f8928: 0xc04d6d8  jal         func_135B60
    ctx->pc = 0x2F8928u;
    SET_GPR_U32(ctx, 31, 0x2F8930u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8930u; }
        if (ctx->pc != 0x2F8930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8930u; }
        if (ctx->pc != 0x2F8930u) { return; }
    }
    ctx->pc = 0x2F8930u;
label_2f8930:
    // 0x2f8930: 0x8f879f40  lw          $a3, -0x60C0($gp)
    ctx->pc = 0x2f8930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942528)));
    // 0x2f8934: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f8934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f8938: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f8938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f893c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8940: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2f8940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2f8944: 0xace200f4  sw          $v0, 0xF4($a3)
    ctx->pc = 0x2f8944u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 244), GPR_U32(ctx, 2));
    // 0x2f8948: 0xac460030  sw          $a2, 0x30($v0)
    ctx->pc = 0x2f8948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 6));
    // 0x2f894c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F894Cu;
    SET_GPR_U32(ctx, 31, 0x2F8954u);
    ctx->pc = 0x2F8950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F894Cu;
            // 0x2f8950: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8954u; }
        if (ctx->pc != 0x2F8954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8954u; }
        if (ctx->pc != 0x2F8954u) { return; }
    }
    ctx->pc = 0x2F8954u;
label_2f8954:
    // 0x2f8954: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x2f8954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x2f8958: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2F8958u;
    SET_GPR_U32(ctx, 31, 0x2F8960u);
    ctx->pc = 0x2F895Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8958u;
            // 0x2f895c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8960u; }
        if (ctx->pc != 0x2F8960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8960u; }
        if (ctx->pc != 0x2F8960u) { return; }
    }
    ctx->pc = 0x2F8960u;
label_2f8960:
    // 0x2f8960: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2f8960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2f8964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f8964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8968: 0x24a58a40  addiu       $a1, $a1, -0x75C0
    ctx->pc = 0x2f8968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937152));
    // 0x2f896c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f896cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8970: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2f8970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2f8974: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x2F8974u;
    SET_GPR_U32(ctx, 31, 0x2F897Cu);
    ctx->pc = 0x2F8978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8974u;
            // 0x2f8978: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F897Cu; }
        if (ctx->pc != 0x2F897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F897Cu; }
        if (ctx->pc != 0x2F897Cu) { return; }
    }
    ctx->pc = 0x2F897Cu;
label_2f897c:
    // 0x2f897c: 0xaf829f48  sw          $v0, -0x60B8($gp)
    ctx->pc = 0x2f897cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942536), GPR_U32(ctx, 2));
    // 0x2f8980: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f8980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8984: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f8984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8988:
    // 0x2f8988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f898c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2F898Cu;
    SET_GPR_U32(ctx, 31, 0x2F8994u);
    ctx->pc = 0x2F8990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F898Cu;
            // 0x2f8990: 0x24050092  addiu       $a1, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8994u; }
        if (ctx->pc != 0x2F8994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8994u; }
        if (ctx->pc != 0x2F8994u) { return; }
    }
    ctx->pc = 0x2F8994u;
label_2f8994:
    // 0x2f8994: 0x24040910  addiu       $a0, $zero, 0x910
    ctx->pc = 0x2f8994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2320));
    // 0x2f8998: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2F8998u;
    SET_GPR_U32(ctx, 31, 0x2F89A0u);
    ctx->pc = 0x2F899Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8998u;
            // 0x2f899c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89A0u; }
        if (ctx->pc != 0x2F89A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89A0u; }
        if (ctx->pc != 0x2F89A0u) { return; }
    }
    ctx->pc = 0x2F89A0u;
label_2f89a0:
    // 0x2f89a0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2f89a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2f89a4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2f89a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f89a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f89a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89ac: 0x24a58a30  addiu       $a1, $a1, -0x75D0
    ctx->pc = 0x2f89acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937136));
    // 0x2f89b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f89b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89b4: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x2F89B4u;
    SET_GPR_U32(ctx, 31, 0x2F89BCu);
    ctx->pc = 0x2F89B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89B4u;
            // 0x2f89b8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89BCu; }
        if (ctx->pc != 0x2F89BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89BCu; }
        if (ctx->pc != 0x2F89BCu) { return; }
    }
    ctx->pc = 0x2F89BCu;
label_2f89bc:
    // 0x2f89bc: 0x8f839f48  lw          $v1, -0x60B8($gp)
    ctx->pc = 0x2f89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942536)));
    // 0x2f89c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f89c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f89c4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x2f89c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f89c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f89c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f89cc: 0x24a51ac8  addiu       $a1, $a1, 0x1AC8
    ctx->pc = 0x2f89ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6856));
    // 0x2f89d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f89d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f89d4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2f89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2f89d8: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x2f89d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x2f89dc: 0x8f839f48  lw          $v1, -0x60B8($gp)
    ctx->pc = 0x2f89dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942536)));
    // 0x2f89e0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2f89e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2f89e4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2F89E4u;
    SET_GPR_U32(ctx, 31, 0x2F89ECu);
    ctx->pc = 0x2F89E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F89E4u;
            // 0x2f89e8: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89ECu; }
        if (ctx->pc != 0x2F89ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F89ECu; }
        if (ctx->pc != 0x2F89ECu) { return; }
    }
    ctx->pc = 0x2F89ECu;
label_2f89ec:
    // 0x2f89ec: 0x8f849f48  lw          $a0, -0x60B8($gp)
    ctx->pc = 0x2f89ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942536)));
    // 0x2f89f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f89f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f89f4: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2f89f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f89f8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2f89f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2f89fc: 0xac820070  sw          $v0, 0x70($a0)
    ctx->pc = 0x2f89fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 2));
    // 0x2f8a00: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2F8A00u;
    {
        const bool branch_taken_0x2f8a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A00u;
            // 0x2f8a04: 0x26730080  addiu       $s3, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8a00) {
            ctx->pc = 0x2F8988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8988;
        }
    }
    ctx->pc = 0x2F8A08u;
    // 0x2f8a08: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x2F8A08u;
    SET_GPR_U32(ctx, 31, 0x2F8A10u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A10u; }
        if (ctx->pc != 0x2F8A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A10u; }
        if (ctx->pc != 0x2F8A10u) { return; }
    }
    ctx->pc = 0x2F8A10u;
label_2f8a10:
    // 0x2f8a10: 0xaf829f44  sw          $v0, -0x60BC($gp)
    ctx->pc = 0x2f8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942532), GPR_U32(ctx, 2));
label_2f8a14:
    // 0x2f8a14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f8a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8a18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f8a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8a1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f8a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8a20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f8a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8a28: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A28u;
            // 0x2f8a2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8A30u;
}
