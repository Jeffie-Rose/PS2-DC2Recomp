#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Write__18CMemoryCardManagerFv
// Address: 0x2f2440 - 0x2f253c
void Write__18CMemoryCardManagerFv_0x2f2440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Write__18CMemoryCardManagerFv_0x2f2440");
#endif

    switch (ctx->pc) {
        case 0x2f2470u: goto label_2f2470;
        case 0x2f2480u: goto label_2f2480;
        case 0x2f2498u: goto label_2f2498;
        case 0x2f24a8u: goto label_2f24a8;
        case 0x2f24bcu: goto label_2f24bc;
        case 0x2f24d4u: goto label_2f24d4;
        case 0x2f24e4u: goto label_2f24e4;
        case 0x2f24fcu: goto label_2f24fc;
        case 0x2f250cu: goto label_2f250c;
        case 0x2f2514u: goto label_2f2514;
        case 0x2f2524u: goto label_2f2524;
        default: break;
    }

    ctx->pc = 0x2f2440u;

    // 0x2f2440: 0x27bdefc0  addiu       $sp, $sp, -0x1040
    ctx->pc = 0x2f2440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963136));
    // 0x2f2444: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2f2444u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2f2448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f2448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f244c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f244cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f2450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f2454: 0x24c617b0  addiu       $a2, $a2, 0x17B0
    ctx->pc = 0x2f2454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6064));
    // 0x2f2458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f2458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f245c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f245cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2460: 0xafa01038  sw          $zero, 0x1038($sp)
    ctx->pc = 0x2f2460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4152), GPR_U32(ctx, 0));
    // 0x2f2464: 0x8c8404c8  lw          $a0, 0x4C8($a0)
    ctx->pc = 0x2f2464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x2f2468: 0xc048cbe  jal         func_1232F8
    ctx->pc = 0x2F2468u;
    SET_GPR_U32(ctx, 31, 0x2F2470u);
    ctx->pc = 0x2F246Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2468u;
            // 0x2f246c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1232F8u;
    if (runtime->hasFunction(0x1232F8u)) {
        auto targetFn = runtime->lookupFunction(0x1232F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2470u; }
        if (ctx->pc != 0x2F2470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcChdir_0x1232f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2470u; }
        if (ctx->pc != 0x2F2470u) { return; }
    }
    ctx->pc = 0x2F2470u;
label_2f2470:
    // 0x2f2470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2474: 0x27a5103c  addiu       $a1, $sp, 0x103C
    ctx->pc = 0x2f2474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4156));
    // 0x2f2478: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F2478u;
    SET_GPR_U32(ctx, 31, 0x2F2480u);
    ctx->pc = 0x2F247Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2478u;
            // 0x2f247c: 0x27a61038  addiu       $a2, $sp, 0x1038 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2480u; }
        if (ctx->pc != 0x2F2480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2480u; }
        if (ctx->pc != 0x2F2480u) { return; }
    }
    ctx->pc = 0x2F2480u;
label_2f2480:
    // 0x2f2480: 0x8e2404c8  lw          $a0, 0x4C8($s1)
    ctx->pc = 0x2f2480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
    // 0x2f2484: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2f2484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x2f2488: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f2488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f248c: 0x24c61888  addiu       $a2, $a2, 0x1888
    ctx->pc = 0x2f248cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6280));
    // 0x2f2490: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F2490u;
    SET_GPR_U32(ctx, 31, 0x2F2498u);
    ctx->pc = 0x2F2494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2490u;
            // 0x2f2494: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2498u; }
        if (ctx->pc != 0x2F2498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2498u; }
        if (ctx->pc != 0x2F2498u) { return; }
    }
    ctx->pc = 0x2F2498u;
label_2f2498:
    // 0x2f2498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f249c: 0x27a5103c  addiu       $a1, $sp, 0x103C
    ctx->pc = 0x2f249cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4156));
    // 0x2f24a0: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F24A0u;
    SET_GPR_U32(ctx, 31, 0x2F24A8u);
    ctx->pc = 0x2F24A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24A0u;
            // 0x2f24a4: 0x27a61038  addiu       $a2, $sp, 0x1038 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24A8u; }
        if (ctx->pc != 0x2F24A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24A8u; }
        if (ctx->pc != 0x2F24A8u) { return; }
    }
    ctx->pc = 0x2F24A8u;
label_2f24a8:
    // 0x2f24a8: 0x8fa31038  lw          $v1, 0x1038($sp)
    ctx->pc = 0x2f24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4152)));
    // 0x2f24ac: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2f24acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2f24b0: 0x34502800  ori         $s0, $v0, 0x2800
    ctx->pc = 0x2f24b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x2f24b4: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x2f24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
    // 0x2f24b8: 0x2a011000  slti        $at, $s0, 0x1000
    ctx->pc = 0x2f24b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
label_2f24bc:
    // 0x2f24bc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F24BCu;
    {
        const bool branch_taken_0x2f24bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F24C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24BCu;
            // 0x2f24c0: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24bc) {
            ctx->pc = 0x2F24C8u;
            goto label_2f24c8;
        }
    }
    ctx->pc = 0x2F24C4u;
    // 0x2f24c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f24c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f24c8:
    // 0x2f24c8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2f24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2f24cc: 0xc048afe  jal         func_122BF8
    ctx->pc = 0x2F24CCu;
    SET_GPR_U32(ctx, 31, 0x2F24D4u);
    ctx->pc = 0x2F24D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24CCu;
            // 0x2f24d0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122BF8u;
    if (runtime->hasFunction(0x122BF8u)) {
        auto targetFn = runtime->lookupFunction(0x122BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24D4u; }
        if (ctx->pc != 0x2F24D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcWrite_0x122bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24D4u; }
        if (ctx->pc != 0x2F24D4u) { return; }
    }
    ctx->pc = 0x2F24D4u;
label_2f24d4:
    // 0x2f24d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f24d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f24d8: 0x27a5103c  addiu       $a1, $sp, 0x103C
    ctx->pc = 0x2f24d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4156));
    // 0x2f24dc: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F24DCu;
    SET_GPR_U32(ctx, 31, 0x2F24E4u);
    ctx->pc = 0x2F24E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24DCu;
            // 0x2f24e0: 0x27a61038  addiu       $a2, $sp, 0x1038 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24E4u; }
        if (ctx->pc != 0x2F24E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24E4u; }
        if (ctx->pc != 0x2F24E4u) { return; }
    }
    ctx->pc = 0x2F24E4u;
label_2f24e4:
    // 0x2f24e4: 0x8fa21038  lw          $v0, 0x1038($sp)
    ctx->pc = 0x2f24e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4152)));
    // 0x2f24e8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2f24e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f24ec: 0x1e00fff3  bgtz        $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F24ECu;
    {
        const bool branch_taken_0x2f24ec = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2F24F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24ECu;
            // 0x2f24f0: 0x2a011000  slti        $at, $s0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4096) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f24ec) {
            ctx->pc = 0x2F24BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f24bc;
        }
    }
    ctx->pc = 0x2F24F4u;
    // 0x2f24f4: 0xc048d8e  jal         func_123638
    ctx->pc = 0x2F24F4u;
    SET_GPR_U32(ctx, 31, 0x2F24FCu);
    ctx->pc = 0x2F24F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F24F4u;
            // 0x2f24f8: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123638u;
    if (runtime->hasFunction(0x123638u)) {
        auto targetFn = runtime->lookupFunction(0x123638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24FCu; }
        if (ctx->pc != 0x2F24FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcFlush_0x123638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F24FCu; }
        if (ctx->pc != 0x2F24FCu) { return; }
    }
    ctx->pc = 0x2F24FCu;
label_2f24fc:
    // 0x2f24fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f24fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2500: 0x27a5103c  addiu       $a1, $sp, 0x103C
    ctx->pc = 0x2f2500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4156));
    // 0x2f2504: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F2504u;
    SET_GPR_U32(ctx, 31, 0x2F250Cu);
    ctx->pc = 0x2F2508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2504u;
            // 0x2f2508: 0x27a61038  addiu       $a2, $sp, 0x1038 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F250Cu; }
        if (ctx->pc != 0x2F250Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F250Cu; }
        if (ctx->pc != 0x2F250Cu) { return; }
    }
    ctx->pc = 0x2F250Cu;
label_2f250c:
    // 0x2f250c: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F250Cu;
    SET_GPR_U32(ctx, 31, 0x2F2514u);
    ctx->pc = 0x2F2510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F250Cu;
            // 0x2f2510: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2514u; }
        if (ctx->pc != 0x2F2514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2514u; }
        if (ctx->pc != 0x2F2514u) { return; }
    }
    ctx->pc = 0x2F2514u;
label_2f2514:
    // 0x2f2514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f2514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2518: 0x27a5103c  addiu       $a1, $sp, 0x103C
    ctx->pc = 0x2f2518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4156));
    // 0x2f251c: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F251Cu;
    SET_GPR_U32(ctx, 31, 0x2F2524u);
    ctx->pc = 0x2F2520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F251Cu;
            // 0x2f2520: 0x27a61038  addiu       $a2, $sp, 0x1038 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2524u; }
        if (ctx->pc != 0x2F2524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2524u; }
        if (ctx->pc != 0x2F2524u) { return; }
    }
    ctx->pc = 0x2F2524u;
label_2f2524:
    // 0x2f2524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f2524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f252c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f252cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f2530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2534: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F2534u;
            // 0x2f2538: 0x27bd1040  addiu       $sp, $sp, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F253Cu;
}
