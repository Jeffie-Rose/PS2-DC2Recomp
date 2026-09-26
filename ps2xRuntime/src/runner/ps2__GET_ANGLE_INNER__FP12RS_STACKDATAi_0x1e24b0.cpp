#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ANGLE_INNER__FP12RS_STACKDATAi
// Address: 0x1e24b0 - 0x1e2594
void ps2__GET_ANGLE_INNER__FP12RS_STACKDATAi_0x1e24b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ANGLE_INNER__FP12RS_STACKDATAi_0x1e24b0");
#endif

    switch (ctx->pc) {
        case 0x1e24dcu: goto label_1e24dc;
        case 0x1e24ecu: goto label_1e24ec;
        case 0x1e2520u: goto label_1e2520;
        case 0x1e2530u: goto label_1e2530;
        case 0x1e2540u: goto label_1e2540;
        case 0x1e2550u: goto label_1e2550;
        case 0x1e2560u: goto label_1e2560;
        case 0x1e256cu: goto label_1e256c;
        case 0x1e2578u: goto label_1e2578;
        default: break;
    }

    ctx->pc = 0x1e24b0u;

    // 0x1e24b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e24b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e24b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e24b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e24b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e24bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e24bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e24c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e24c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e24c4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E24C4u;
    {
        const bool branch_taken_0x1e24c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E24C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24C4u;
            // 0x1e24c8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24c4) {
            ctx->pc = 0x1E24D4u;
            goto label_1e24d4;
        }
    }
    ctx->pc = 0x1E24CCu;
    // 0x1e24cc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E24CCu;
    {
        const bool branch_taken_0x1e24cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E24D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24CCu;
            // 0x1e24d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24cc) {
            ctx->pc = 0x1E257Cu;
            goto label_1e257c;
        }
    }
    ctx->pc = 0x1E24D4u;
label_1e24d4:
    // 0x1e24d4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E24D4u;
    SET_GPR_U32(ctx, 31, 0x1E24DCu);
    ctx->pc = 0x1E24D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24D4u;
            // 0x1e24d8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24DCu; }
        if (ctx->pc != 0x1E24DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24DCu; }
        if (ctx->pc != 0x1E24DCu) { return; }
    }
    ctx->pc = 0x1E24DCu;
label_1e24dc:
    // 0x1e24dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e24dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e24e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e24e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e24e4: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E24E4u;
    SET_GPR_U32(ctx, 31, 0x1E24ECu);
    ctx->pc = 0x1E24E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E24E4u;
            // 0x1e24e8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24ECu; }
        if (ctx->pc != 0x1E24ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E24ECu; }
        if (ctx->pc != 0x1E24ECu) { return; }
    }
    ctx->pc = 0x1E24ECu;
label_1e24ec:
    // 0x1e24ec: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1e24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1e24f0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1e24f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e24f4: 0x2442d300  addiu       $v0, $v0, -0x2D00
    ctx->pc = 0x1e24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x1e24f8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1e24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e24fc: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1e24fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2500: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1e2500u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1e2504: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e2504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e2508: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1e2508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1e250c: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1e250cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1e2510: 0x2442d310  addiu       $v0, $v0, -0x2CF0
    ctx->pc = 0x1e2510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955792));
    // 0x1e2514: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1e2514u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2518: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x1E2518u;
    SET_GPR_U32(ctx, 31, 0x1E2520u);
    ctx->pc = 0x1E251Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2518u;
            // 0x1e251c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2520u; }
        if (ctx->pc != 0x1E2520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2520u; }
        if (ctx->pc != 0x1E2520u) { return; }
    }
    ctx->pc = 0x1E2520u;
label_1e2520:
    // 0x1e2520: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e2520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e2524: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1e2524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e2528: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x1E2528u;
    SET_GPR_U32(ctx, 31, 0x1E2530u);
    ctx->pc = 0x1E252Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2528u;
            // 0x1e252c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2530u; }
        if (ctx->pc != 0x1E2530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2530u; }
        if (ctx->pc != 0x1E2530u) { return; }
    }
    ctx->pc = 0x1E2530u;
label_1e2530:
    // 0x1e2530: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e2530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2534: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e2534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e2538: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1E2538u;
    SET_GPR_U32(ctx, 31, 0x1E2540u);
    ctx->pc = 0x1E253Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2538u;
            // 0x1e253c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2540u; }
        if (ctx->pc != 0x1E2540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2540u; }
        if (ctx->pc != 0x1E2540u) { return; }
    }
    ctx->pc = 0x1E2540u;
label_1e2540:
    // 0x1e2540: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1e2540u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1e2544: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1e2544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e2548: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x1E2548u;
    SET_GPR_U32(ctx, 31, 0x1E2550u);
    ctx->pc = 0x1E254Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2548u;
            // 0x1e254c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2550u; }
        if (ctx->pc != 0x1E2550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2550u; }
        if (ctx->pc != 0x1E2550u) { return; }
    }
    ctx->pc = 0x1E2550u;
label_1e2550:
    // 0x1e2550: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e2550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e2554: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e2554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e2558: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x1E2558u;
    SET_GPR_U32(ctx, 31, 0x1E2560u);
    ctx->pc = 0x1E255Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2558u;
            // 0x1e255c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2560u; }
        if (ctx->pc != 0x1E2560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2560u; }
        if (ctx->pc != 0x1E2560u) { return; }
    }
    ctx->pc = 0x1E2560u;
label_1e2560:
    // 0x1e2560: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e2560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e2564: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x1E2564u;
    SET_GPR_U32(ctx, 31, 0x1E256Cu);
    ctx->pc = 0x1E2568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2564u;
            // 0x1e2568: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E256Cu; }
        if (ctx->pc != 0x1E256Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E256Cu; }
        if (ctx->pc != 0x1E256Cu) { return; }
    }
    ctx->pc = 0x1E256Cu;
label_1e256c:
    // 0x1e256c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e256cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2570: 0xc0781c4  jal         func_1E0710
    ctx->pc = 0x1E2570u;
    SET_GPR_U32(ctx, 31, 0x1E2578u);
    ctx->pc = 0x1E2574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2570u;
            // 0x1e2574: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0710u;
    if (runtime->hasFunction(0x1E0710u)) {
        auto targetFn = runtime->lookupFunction(0x1E0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2578u; }
        if (ctx->pc != 0x1E2578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x1e0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2578u; }
        if (ctx->pc != 0x1E2578u) { return; }
    }
    ctx->pc = 0x1E2578u;
label_1e2578:
    // 0x1e2578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e257c:
    // 0x1e257c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e257cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2580: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e2580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e2584: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2588: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e2588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e258c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E258Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E258Cu;
            // 0x1e2590: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2594u;
}
