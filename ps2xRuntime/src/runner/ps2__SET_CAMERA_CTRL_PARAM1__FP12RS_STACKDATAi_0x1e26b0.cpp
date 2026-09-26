#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_CTRL_PARAM1__FP12RS_STACKDATAi
// Address: 0x1e26b0 - 0x1e2898
void ps2__SET_CAMERA_CTRL_PARAM1__FP12RS_STACKDATAi_0x1e26b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_CTRL_PARAM1__FP12RS_STACKDATAi_0x1e26b0");
#endif

    switch (ctx->pc) {
        case 0x1e26f8u: goto label_1e26f8;
        case 0x1e2700u: goto label_1e2700;
        case 0x1e2714u: goto label_1e2714;
        case 0x1e2738u: goto label_1e2738;
        case 0x1e2744u: goto label_1e2744;
        case 0x1e2770u: goto label_1e2770;
        case 0x1e2794u: goto label_1e2794;
        case 0x1e27a0u: goto label_1e27a0;
        case 0x1e27d0u: goto label_1e27d0;
        case 0x1e27f4u: goto label_1e27f4;
        case 0x1e2800u: goto label_1e2800;
        case 0x1e282cu: goto label_1e282c;
        case 0x1e2850u: goto label_1e2850;
        case 0x1e285cu: goto label_1e285c;
        default: break;
    }

    ctx->pc = 0x1e26b0u;

    // 0x1e26b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e26b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e26b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e26b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e26b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e26b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e26bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e26bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e26c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e26c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e26c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e26c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e26c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e26cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e26ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26d0: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E26D0u;
    {
        const bool branch_taken_0x1e26d0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1E26D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26D0u;
            // 0x1e26d4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26d0) {
            ctx->pc = 0x1E26ECu;
            goto label_1e26ec;
        }
    }
    ctx->pc = 0x1E26D8u;
    // 0x1e26d8: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x1e26d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e26dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E26DCu;
    {
        const bool branch_taken_0x1e26dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E26E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26DCu;
            // 0x1e26e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26dc) {
            ctx->pc = 0x1E26ECu;
            goto label_1e26ec;
        }
    }
    ctx->pc = 0x1E26E4u;
    // 0x1e26e4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1E26E4u;
    {
        const bool branch_taken_0x1e26e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E26E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26E4u;
            // 0x1e26e8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26e4) {
            ctx->pc = 0x1E287Cu;
            goto label_1e287c;
        }
    }
    ctx->pc = 0x1E26ECu;
label_1e26ec:
    // 0x1e26ec: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e26ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e26f0: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1E26F0u;
    SET_GPR_U32(ctx, 31, 0x1E26F8u);
    ctx->pc = 0x1E26F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26F0u;
            // 0x1e26f4: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26F8u; }
        if (ctx->pc != 0x1E26F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E26F8u; }
        if (ctx->pc != 0x1E26F8u) { return; }
    }
    ctx->pc = 0x1E26F8u;
label_1e26f8:
    // 0x1e26f8: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x1E26F8u;
    SET_GPR_U32(ctx, 31, 0x1E2700u);
    ctx->pc = 0x1E26FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E26F8u;
            // 0x1e26fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2700u; }
        if (ctx->pc != 0x1E2700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2700u; }
        if (ctx->pc != 0x1E2700u) { return; }
    }
    ctx->pc = 0x1E2700u;
label_1e2700:
    // 0x1e2700: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2700u;
    {
        const bool branch_taken_0x1e2700 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1E2704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2700u;
            // 0x1e2704: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2700) {
            ctx->pc = 0x1E2718u;
            goto label_1e2718;
        }
    }
    ctx->pc = 0x1E2708u;
    // 0x1e2708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e270c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E270Cu;
    SET_GPR_U32(ctx, 31, 0x1E2714u);
    ctx->pc = 0x1E2710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E270Cu;
            // 0x1e2710: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2714u; }
        if (ctx->pc != 0x1E2714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2714u; }
        if (ctx->pc != 0x1E2714u) { return; }
    }
    ctx->pc = 0x1E2714u;
label_1e2714:
    // 0x1e2714: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e2714u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e2718:
    // 0x1e2718: 0x3c03c0f8  lui         $v1, 0xC0F8
    ctx->pc = 0x1e2718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
    // 0x1e271c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e2720: 0x346369fe  ori         $v1, $v1, 0x69FE
    ctx->pc = 0x1e2720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27134);
    // 0x1e2724: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e2724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e2728: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e2728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e272c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e272cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e2730: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E2730u;
    SET_GPR_U32(ctx, 31, 0x1E2738u);
    ctx->pc = 0x1E2734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2730u;
            // 0x1e2734: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2738u; }
        if (ctx->pc != 0x1E2738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2738u; }
        if (ctx->pc != 0x1E2738u) { return; }
    }
    ctx->pc = 0x1E2738u;
label_1e2738:
    // 0x1e2738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e2738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e273c: 0xc040034  jal         func_1000D0
    ctx->pc = 0x1E273Cu;
    SET_GPR_U32(ctx, 31, 0x1E2744u);
    ctx->pc = 0x1E2740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E273Cu;
            // 0x1e2740: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000D0u;
    if (runtime->hasFunction(0x1000D0u)) {
        auto targetFn = runtime->lookupFunction(0x1000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2744u; }
        if (ctx->pc != 0x1E2744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfne_0x1000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2744u; }
        if (ctx->pc != 0x1E2744u) { return; }
    }
    ctx->pc = 0x1E2744u;
label_1e2744:
    // 0x1e2744: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2744u;
    {
        const bool branch_taken_0x1e2744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2744u;
            // 0x1e2748: 0x2a210002  slti        $at, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2744) {
            ctx->pc = 0x1E275Cu;
            goto label_1e275c;
        }
    }
    ctx->pc = 0x1E274Cu;
    // 0x1e274c: 0x1a200002  blez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E274Cu;
    {
        const bool branch_taken_0x1e274c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1e274c) {
            ctx->pc = 0x1E2758u;
            goto label_1e2758;
        }
    }
    ctx->pc = 0x1E2754u;
    // 0x1e2754: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x1e2754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1e2758:
    // 0x1e2758: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1e2758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e275c:
    // 0x1e275c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E275Cu;
    {
        const bool branch_taken_0x1e275c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E275Cu;
            // 0x1e2760: 0x3c03c0f8  lui         $v1, 0xC0F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e275c) {
            ctx->pc = 0x1E2778u;
            goto label_1e2778;
        }
    }
    ctx->pc = 0x1E2764u;
    // 0x1e2764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2768: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2768u;
    SET_GPR_U32(ctx, 31, 0x1E2770u);
    ctx->pc = 0x1E276Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2768u;
            // 0x1e276c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2770u; }
        if (ctx->pc != 0x1E2770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2770u; }
        if (ctx->pc != 0x1E2770u) { return; }
    }
    ctx->pc = 0x1E2770u;
label_1e2770:
    // 0x1e2770: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e2770u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e2774: 0x3c03c0f8  lui         $v1, 0xC0F8
    ctx->pc = 0x1e2774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
label_1e2778:
    // 0x1e2778: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e2778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e277c: 0x346369fe  ori         $v1, $v1, 0x69FE
    ctx->pc = 0x1e277cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27134);
    // 0x1e2780: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e2780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e2784: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e2784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e2788: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e2788u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e278c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E278Cu;
    SET_GPR_U32(ctx, 31, 0x1E2794u);
    ctx->pc = 0x1E2790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E278Cu;
            // 0x1e2790: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2794u; }
        if (ctx->pc != 0x1E2794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2794u; }
        if (ctx->pc != 0x1E2794u) { return; }
    }
    ctx->pc = 0x1E2794u;
label_1e2794:
    // 0x1e2794: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e2794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2798: 0xc040034  jal         func_1000D0
    ctx->pc = 0x1E2798u;
    SET_GPR_U32(ctx, 31, 0x1E27A0u);
    ctx->pc = 0x1E279Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2798u;
            // 0x1e279c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000D0u;
    if (runtime->hasFunction(0x1000D0u)) {
        auto targetFn = runtime->lookupFunction(0x1000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27A0u; }
        if (ctx->pc != 0x1E27A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfne_0x1000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27A0u; }
        if (ctx->pc != 0x1E27A0u) { return; }
    }
    ctx->pc = 0x1E27A0u;
label_1e27a0:
    // 0x1e27a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E27A0u;
    {
        const bool branch_taken_0x1e27a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E27A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27A0u;
            // 0x1e27a4: 0x2a210003  slti        $at, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27a0) {
            ctx->pc = 0x1E27BCu;
            goto label_1e27bc;
        }
    }
    ctx->pc = 0x1E27A8u;
    // 0x1e27a8: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x1e27a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e27ac: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E27ACu;
    {
        const bool branch_taken_0x1e27ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e27ac) {
            ctx->pc = 0x1E27B8u;
            goto label_1e27b8;
        }
    }
    ctx->pc = 0x1E27B4u;
    // 0x1e27b4: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x1e27b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1e27b8:
    // 0x1e27b8: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1e27b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e27bc:
    // 0x1e27bc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E27BCu;
    {
        const bool branch_taken_0x1e27bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E27C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27BCu;
            // 0x1e27c0: 0x3c03c0f8  lui         $v1, 0xC0F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27bc) {
            ctx->pc = 0x1E27D8u;
            goto label_1e27d8;
        }
    }
    ctx->pc = 0x1E27C4u;
    // 0x1e27c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e27c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e27c8: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E27C8u;
    SET_GPR_U32(ctx, 31, 0x1E27D0u);
    ctx->pc = 0x1E27CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27C8u;
            // 0x1e27cc: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27D0u; }
        if (ctx->pc != 0x1E27D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27D0u; }
        if (ctx->pc != 0x1E27D0u) { return; }
    }
    ctx->pc = 0x1E27D0u;
label_1e27d0:
    // 0x1e27d0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e27d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e27d4: 0x3c03c0f8  lui         $v1, 0xC0F8
    ctx->pc = 0x1e27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
label_1e27d8:
    // 0x1e27d8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e27dc: 0x346369fe  ori         $v1, $v1, 0x69FE
    ctx->pc = 0x1e27dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27134);
    // 0x1e27e0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e27e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e27e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e27e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e27e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e27e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e27ec: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E27ECu;
    SET_GPR_U32(ctx, 31, 0x1E27F4u);
    ctx->pc = 0x1E27F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27ECu;
            // 0x1e27f0: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27F4u; }
        if (ctx->pc != 0x1E27F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27F4u; }
        if (ctx->pc != 0x1E27F4u) { return; }
    }
    ctx->pc = 0x1E27F4u;
label_1e27f4:
    // 0x1e27f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e27f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e27f8: 0xc040034  jal         func_1000D0
    ctx->pc = 0x1E27F8u;
    SET_GPR_U32(ctx, 31, 0x1E2800u);
    ctx->pc = 0x1E27FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E27F8u;
            // 0x1e27fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000D0u;
    if (runtime->hasFunction(0x1000D0u)) {
        auto targetFn = runtime->lookupFunction(0x1000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2800u; }
        if (ctx->pc != 0x1E2800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfne_0x1000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2800u; }
        if (ctx->pc != 0x1E2800u) { return; }
    }
    ctx->pc = 0x1E2800u;
label_1e2800:
    // 0x1e2800: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2800u;
    {
        const bool branch_taken_0x1e2800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2800u;
            // 0x1e2804: 0x2a210004  slti        $at, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2800) {
            ctx->pc = 0x1E281Cu;
            goto label_1e281c;
        }
    }
    ctx->pc = 0x1E2808u;
    // 0x1e2808: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1e2808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e280c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E280Cu;
    {
        const bool branch_taken_0x1e280c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e280c) {
            ctx->pc = 0x1E2818u;
            goto label_1e2818;
        }
    }
    ctx->pc = 0x1E2814u;
    // 0x1e2814: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x1e2814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1e2818:
    // 0x1e2818: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x1e2818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e281c:
    // 0x1e281c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E281Cu;
    {
        const bool branch_taken_0x1e281c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E281Cu;
            // 0x1e2820: 0x3c03c0f8  lui         $v1, 0xC0F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e281c) {
            ctx->pc = 0x1E2834u;
            goto label_1e2834;
        }
    }
    ctx->pc = 0x1E2824u;
    // 0x1e2824: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2824u;
    SET_GPR_U32(ctx, 31, 0x1E282Cu);
    ctx->pc = 0x1E2828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2824u;
            // 0x1e2828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E282Cu; }
        if (ctx->pc != 0x1E282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E282Cu; }
        if (ctx->pc != 0x1E282Cu) { return; }
    }
    ctx->pc = 0x1E282Cu;
label_1e282c:
    // 0x1e282c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e282cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1e2830: 0x3c03c0f8  lui         $v1, 0xC0F8
    ctx->pc = 0x1e2830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49400 << 16));
label_1e2834:
    // 0x1e2834: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e2834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e2838: 0x346369fe  ori         $v1, $v1, 0x69FE
    ctx->pc = 0x1e2838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27134);
    // 0x1e283c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e2840: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e2840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e2844: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e2844u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e2848: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E2848u;
    SET_GPR_U32(ctx, 31, 0x1E2850u);
    ctx->pc = 0x1E284Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2848u;
            // 0x1e284c: 0x439025  or          $s2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2850u; }
        if (ctx->pc != 0x1E2850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2850u; }
        if (ctx->pc != 0x1E2850u) { return; }
    }
    ctx->pc = 0x1E2850u;
label_1e2850:
    // 0x1e2850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e2850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2854: 0xc040034  jal         func_1000D0
    ctx->pc = 0x1E2854u;
    SET_GPR_U32(ctx, 31, 0x1E285Cu);
    ctx->pc = 0x1E2858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2854u;
            // 0x1e2858: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1000D0u;
    if (runtime->hasFunction(0x1000D0u)) {
        auto targetFn = runtime->lookupFunction(0x1000D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E285Cu; }
        if (ctx->pc != 0x1E285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfne_0x1000d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E285Cu; }
        if (ctx->pc != 0x1E285Cu) { return; }
    }
    ctx->pc = 0x1E285Cu;
label_1e285c:
    // 0x1e285c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E285Cu;
    {
        const bool branch_taken_0x1e285c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E285Cu;
            // 0x1e2860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e285c) {
            ctx->pc = 0x1E2878u;
            goto label_1e2878;
        }
    }
    ctx->pc = 0x1E2864u;
    // 0x1e2864: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x1e2864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1e2868: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2868u;
    {
        const bool branch_taken_0x1e2868 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2868) {
            ctx->pc = 0x1E2874u;
            goto label_1e2874;
        }
    }
    ctx->pc = 0x1E2870u;
    // 0x1e2870: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1e2870u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1e2874:
    // 0x1e2874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2878:
    // 0x1e2878: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e2878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e287c:
    // 0x1e287c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e2880: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e2880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2884: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e2884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2888: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e2888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e288c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e288cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2890: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2890u;
            // 0x1e2894: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2898u;
}
