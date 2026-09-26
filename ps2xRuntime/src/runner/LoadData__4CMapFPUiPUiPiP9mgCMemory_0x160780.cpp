#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadData__4CMapFPUiPUiPiP9mgCMemory
// Address: 0x160780 - 0x1608f4
void LoadData__4CMapFPUiPUiPiP9mgCMemory_0x160780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadData__4CMapFPUiPUiPiP9mgCMemory_0x160780");
#endif

    switch (ctx->pc) {
        case 0x1607d8u: goto label_1607d8;
        case 0x1607e4u: goto label_1607e4;
        case 0x160800u: goto label_160800;
        case 0x160818u: goto label_160818;
        case 0x160838u: goto label_160838;
        case 0x16084cu: goto label_16084c;
        case 0x160860u: goto label_160860;
        case 0x16086cu: goto label_16086c;
        case 0x160878u: goto label_160878;
        case 0x160890u: goto label_160890;
        case 0x1608b0u: goto label_1608b0;
        default: break;
    }

    ctx->pc = 0x160780u;

    // 0x160780: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x160780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x160784: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x160784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x160788: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x160788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16078c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16078cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x160790: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x160790u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160794: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x160794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x160798: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x160798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16079c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x16079cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1607a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1607a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1607a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1607a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1607ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1607acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1607b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1607b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1607b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1607b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1607b8: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x1607b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
    // 0x1607bc: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x1607bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x1607c0: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1607C0u;
    {
        const bool branch_taken_0x1607c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1607C0u;
            // 0x1607c4: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607c0) {
            ctx->pc = 0x1608C4u;
            goto label_1608c4;
        }
    }
    ctx->pc = 0x1607C8u;
    // 0x1607c8: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x1607c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1607cc: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x1607ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x1607d0: 0x26f71ef0  addiu       $s7, $s7, 0x1EF0
    ctx->pc = 0x1607d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 7920));
    // 0x1607d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1607d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1607d8:
    // 0x1607d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1607d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607dc: 0xc0593e8  jal         func_164FA0
    ctx->pc = 0x1607DCu;
    SET_GPR_U32(ctx, 31, 0x1607E4u);
    ctx->pc = 0x1607E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1607DCu;
            // 0x1607e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164FA0u;
    if (runtime->hasFunction(0x164FA0u)) {
        auto targetFn = runtime->lookupFunction(0x164FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607E4u; }
        if (ctx->pc != 0x1607E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetImgName__8CMapInfoFi_0x164fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1607E4u; }
        if (ctx->pc != 0x1607E4u) { return; }
    }
    ctx->pc = 0x1607E4u;
label_1607e4:
    // 0x1607e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1607e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607e8: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1607E8u;
    {
        const bool branch_taken_0x1607e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607e8) {
            ctx->pc = 0x160868u;
            goto label_160868;
        }
    }
    ctx->pc = 0x1607F0u;
    // 0x1607f0: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1607f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1607f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1607f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607f8: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1607F8u;
    SET_GPR_U32(ctx, 31, 0x160800u);
    ctx->pc = 0x1607FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1607F8u;
            // 0x1607fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160800u; }
        if (ctx->pc != 0x160800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160800u; }
        if (ctx->pc != 0x160800u) { return; }
    }
    ctx->pc = 0x160800u;
label_160800:
    // 0x160800: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x160800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160804: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x160804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x160808: 0x24842d28  addiu       $a0, $a0, 0x2D28
    ctx->pc = 0x160808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11560));
    // 0x16080c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16080cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160810: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x160810u;
    SET_GPR_U32(ctx, 31, 0x160818u);
    ctx->pc = 0x160814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160810u;
            // 0x160814: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160818u; }
        if (ctx->pc != 0x160818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160818u; }
        if (ctx->pc != 0x160818u) { return; }
    }
    ctx->pc = 0x160818u;
label_160818:
    // 0x160818: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x160818u;
    {
        const bool branch_taken_0x160818 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x16081Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160818u;
            // 0x16081c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160818) {
            ctx->pc = 0x160860u;
            goto label_160860;
        }
    }
    ctx->pc = 0x160820u;
    // 0x160820: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x160820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160824: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x160824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160828: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x160828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16082c: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x16082cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x160830: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x160830u;
    SET_GPR_U32(ctx, 31, 0x160838u);
    ctx->pc = 0x160834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160830u;
            // 0x160834: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160838u; }
        if (ctx->pc != 0x160838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160838u; }
        if (ctx->pc != 0x160838u) { return; }
    }
    ctx->pc = 0x160838u;
label_160838:
    // 0x160838: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x160838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16083c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16083cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160840: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x160840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160844: 0xc04b974  jal         func_12E5D0
    ctx->pc = 0x160844u;
    SET_GPR_U32(ctx, 31, 0x16084Cu);
    ctx->pc = 0x160848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160844u;
            // 0x160848: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E5D0u;
    if (runtime->hasFunction(0x12E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x12E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16084Cu; }
        if (ctx->pc != 0x16084Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndEnterTexture__17mgCTextureManagerFi_0x12e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16084Cu; }
        if (ctx->pc != 0x16084Cu) { return; }
    }
    ctx->pc = 0x16084Cu;
label_16084c:
    // 0x16084c: 0x8ea40100  lw          $a0, 0x100($s5)
    ctx->pc = 0x16084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 256)));
    // 0x160850: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160854: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x160854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x160858: 0xc05a38c  jal         func_168E30
    ctx->pc = 0x160858u;
    SET_GPR_U32(ctx, 31, 0x160860u);
    ctx->pc = 0x16085Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160858u;
            // 0x16085c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168E30u;
    if (runtime->hasFunction(0x168E30u)) {
        auto targetFn = runtime->lookupFunction(0x168E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160860u; }
        if (ctx->pc != 0x160860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadIMGFile__11CMdsListSetFPcP15mgCEnterIMGInfoP9mgCMemory_0x168e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160860u; }
        if (ctx->pc != 0x160860u) { return; }
    }
    ctx->pc = 0x160860u;
label_160860:
    // 0x160860: 0x1000ffdd  b           . + 4 + (-0x23 << 2)
    ctx->pc = 0x160860u;
    {
        const bool branch_taken_0x160860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160860u;
            // 0x160864: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160860) {
            ctx->pc = 0x1607D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1607d8;
        }
    }
    ctx->pc = 0x160868u;
label_160868:
    // 0x160868: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16086c:
    // 0x16086c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16086cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160870: 0xc0593f8  jal         func_164FE0
    ctx->pc = 0x160870u;
    SET_GPR_U32(ctx, 31, 0x160878u);
    ctx->pc = 0x160874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160870u;
            // 0x160874: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164FE0u;
    if (runtime->hasFunction(0x164FE0u)) {
        auto targetFn = runtime->lookupFunction(0x164FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160878u; }
        if (ctx->pc != 0x160878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPCPName__8CMapInfoFi_0x164fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160878u; }
        if (ctx->pc != 0x160878u) { return; }
    }
    ctx->pc = 0x160878u;
label_160878:
    // 0x160878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16087c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x16087Cu;
    {
        const bool branch_taken_0x16087c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x160880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16087Cu;
            // 0x160880: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16087c) {
            ctx->pc = 0x1608B8u;
            goto label_1608b8;
        }
    }
    ctx->pc = 0x160884u;
    // 0x160884: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160888: 0xc052734  jal         func_149CD0
    ctx->pc = 0x160888u;
    SET_GPR_U32(ctx, 31, 0x160890u);
    ctx->pc = 0x16088Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160888u;
            // 0x16088c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160890u; }
        if (ctx->pc != 0x160890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160890u; }
        if (ctx->pc != 0x160890u) { return; }
    }
    ctx->pc = 0x160890u;
label_160890:
    // 0x160890: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x160890u;
    {
        const bool branch_taken_0x160890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160890) {
            ctx->pc = 0x1608B0u;
            goto label_1608b0;
        }
    }
    ctx->pc = 0x160898u;
    // 0x160898: 0x8ea40100  lw          $a0, 0x100($s5)
    ctx->pc = 0x160898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 256)));
    // 0x16089c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16089cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608a0: 0x8ea800e8  lw          $t0, 0xE8($s5)
    ctx->pc = 0x1608a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 232)));
    // 0x1608a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1608a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608a8: 0xc05a338  jal         func_168CE0
    ctx->pc = 0x1608A8u;
    SET_GPR_U32(ctx, 31, 0x1608B0u);
    ctx->pc = 0x1608ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1608A8u;
            // 0x1608ac: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168CE0u;
    if (runtime->hasFunction(0x168CE0u)) {
        auto targetFn = runtime->lookupFunction(0x168CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1608B0u; }
        if (ctx->pc != 0x1608B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadPCPFile__11CMdsListSetFPcPUiP9mgCMemoryi_0x168ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1608B0u; }
        if (ctx->pc != 0x1608B0u) { return; }
    }
    ctx->pc = 0x1608B0u;
label_1608b0:
    // 0x1608b0: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1608B0u;
    {
        const bool branch_taken_0x1608b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1608B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1608B0u;
            // 0x1608b4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608b0) {
            ctx->pc = 0x16086Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16086c;
        }
    }
    ctx->pc = 0x1608B8u;
label_1608b8:
    // 0x1608b8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1608b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1608bc: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x1608bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1608c0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1608c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_1608c4:
    // 0x1608c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1608c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1608c8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1608c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1608cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1608ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1608d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1608d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1608d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1608d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1608d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1608d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1608dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1608dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1608e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1608e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1608e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1608e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1608e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1608e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1608ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1608ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1608F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1608ECu;
            // 0x1608f0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1608F4u;
}
