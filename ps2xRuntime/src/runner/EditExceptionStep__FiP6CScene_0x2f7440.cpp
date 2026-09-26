#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditExceptionStep__FiP6CScene
// Address: 0x2f7440 - 0x2f76b4
void EditExceptionStep__FiP6CScene_0x2f7440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditExceptionStep__FiP6CScene_0x2f7440");
#endif

    switch (ctx->pc) {
        case 0x2f7478u: goto label_2f7478;
        case 0x2f7490u: goto label_2f7490;
        case 0x2f74a4u: goto label_2f74a4;
        case 0x2f74d0u: goto label_2f74d0;
        case 0x2f74e8u: goto label_2f74e8;
        case 0x2f74fcu: goto label_2f74fc;
        case 0x2f7528u: goto label_2f7528;
        case 0x2f754cu: goto label_2f754c;
        case 0x2f7560u: goto label_2f7560;
        case 0x2f7578u: goto label_2f7578;
        case 0x2f7584u: goto label_2f7584;
        case 0x2f7664u: goto label_2f7664;
        case 0x2f7698u: goto label_2f7698;
        default: break;
    }

    ctx->pc = 0x2f7440u;

    // 0x2f7440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f7440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f7444: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f7444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f7448: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f7448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f744c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f7450: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f7450u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f7454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f7458: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f7458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f745c: 0x1220008e  beqz        $s1, . + 4 + (0x8E << 2)
    ctx->pc = 0x2F745Cu;
    {
        const bool branch_taken_0x2f745c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F745Cu;
            // 0x2f7460: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f745c) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F7464u;
    // 0x2f7464: 0x8e252e5c  lw          $a1, 0x2E5C($s1)
    ctx->pc = 0x2f7464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11868)));
    // 0x2f7468: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x2f7468u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x2f746c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f746cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7470: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2F7470u;
    SET_GPR_U32(ctx, 31, 0x2F7478u);
    ctx->pc = 0x2F7474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7470u;
            // 0x2f7474: 0x26521ef0  addiu       $s2, $s2, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7478u; }
        if (ctx->pc != 0x2F7478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7478u; }
        if (ctx->pc != 0x2F7478u) { return; }
    }
    ctx->pc = 0x2F7478u;
label_2f7478:
    // 0x2f7478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f7478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f747c: 0x12000086  beqz        $s0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2F747Cu;
    {
        const bool branch_taken_0x2f747c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f747c) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F7484u;
    // 0x2f7484: 0x8e252e54  lw          $a1, 0x2E54($s1)
    ctx->pc = 0x2f7484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11860)));
    // 0x2f7488: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x2F7488u;
    SET_GPR_U32(ctx, 31, 0x2F7490u);
    ctx->pc = 0x2F748Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7488u;
            // 0x2f748c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7490u; }
        if (ctx->pc != 0x2F7490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7490u; }
        if (ctx->pc != 0x2F7490u) { return; }
    }
    ctx->pc = 0x2F7490u;
label_2f7490:
    // 0x2f7490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7494: 0x10800080  beqz        $a0, . + 4 + (0x80 << 2)
    ctx->pc = 0x2F7494u;
    {
        const bool branch_taken_0x2f7494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7494u;
            // 0x2f7498: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7494) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F749Cu;
    // 0x2f749c: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x2F749Cu;
    SET_GPR_U32(ctx, 31, 0x2F74A4u);
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F74A4u; }
        if (ctx->pc != 0x2F74A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F74A4u; }
        if (ctx->pc != 0x2F74A4u) { return; }
    }
    ctx->pc = 0x2F74A4u;
label_2f74a4:
    // 0x2f74a4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2f74a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f74a8: 0x12630006  beq         $s3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F74A8u;
    {
        const bool branch_taken_0x2f74a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F74ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F74A8u;
            // 0x2f74ac: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74a8) {
            ctx->pc = 0x2F74C4u;
            goto label_2f74c4;
        }
    }
    ctx->pc = 0x2F74B0u;
    // 0x2f74b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f74b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f74b4: 0x12630004  beq         $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F74B4u;
    {
        const bool branch_taken_0x2f74b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F74B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F74B4u;
            // 0x2f74b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74b4) {
            ctx->pc = 0x2F74C8u;
            goto label_2f74c8;
        }
    }
    ctx->pc = 0x2F74BCu;
    // 0x2f74bc: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2F74BCu;
    {
        const bool branch_taken_0x2f74bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F74C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F74BCu;
            // 0x2f74c0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74bc) {
            ctx->pc = 0x2F769Cu;
            goto label_2f769c;
        }
    }
    ctx->pc = 0x2F74C4u;
label_2f74c4:
    // 0x2f74c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f74c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f74c8:
    // 0x2f74c8: 0xc057508  jal         func_15D420
    ctx->pc = 0x2F74C8u;
    SET_GPR_U32(ctx, 31, 0x2F74D0u);
    ctx->pc = 0x2F74CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F74C8u;
            // 0x2f74cc: 0x24a51a08  addiu       $a1, $a1, 0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F74D0u; }
        if (ctx->pc != 0x2F74D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F74D0u; }
        if (ctx->pc != 0x2F74D0u) { return; }
    }
    ctx->pc = 0x2F74D0u;
label_2f74d0:
    // 0x2f74d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f74d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f74d4: 0x12000070  beqz        $s0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2F74D4u;
    {
        const bool branch_taken_0x2f74d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F74D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F74D4u;
            // 0x2f74d8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f74d4) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F74DCu;
    // 0x2f74dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f74dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f74e0: 0xc059924  jal         func_166490
    ctx->pc = 0x2F74E0u;
    SET_GPR_U32(ctx, 31, 0x2F74E8u);
    ctx->pc = 0x2F74E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F74E0u;
            // 0x2f74e4: 0x24a51a18  addiu       $a1, $a1, 0x1A18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F74E8u; }
        if (ctx->pc != 0x2F74E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F74E8u; }
        if (ctx->pc != 0x2F74E8u) { return; }
    }
    ctx->pc = 0x2F74E8u;
label_2f74e8:
    // 0x2f74e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f74e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f74ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2f74ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2f74f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f74f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f74f4: 0xc059924  jal         func_166490
    ctx->pc = 0x2F74F4u;
    SET_GPR_U32(ctx, 31, 0x2F74FCu);
    ctx->pc = 0x2F74F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F74F4u;
            // 0x2f74f8: 0x24a51a28  addiu       $a1, $a1, 0x1A28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F74FCu; }
        if (ctx->pc != 0x2F74FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F74FCu; }
        if (ctx->pc != 0x2F74FCu) { return; }
    }
    ctx->pc = 0x2F74FCu;
label_2f74fc:
    // 0x2f74fc: 0x12000066  beqz        $s0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2F74FCu;
    {
        const bool branch_taken_0x2f74fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f74fc) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F7504u;
    // 0x2f7504: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2F7504u;
    {
        const bool branch_taken_0x2f7504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7504) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F750Cu;
    // 0x2f750c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2f750cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2f7510: 0x10800061  beqz        $a0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2F7510u;
    {
        const bool branch_taken_0x2f7510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7510u;
            // 0x2f7514: 0x8c500070  lw          $s0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7510) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F7518u;
    // 0x2f7518: 0x1200005f  beqz        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2F7518u;
    {
        const bool branch_taken_0x2f7518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F751Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7518u;
            // 0x2f751c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7518) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F7520u;
    // 0x2f7520: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2F7520u;
    SET_GPR_U32(ctx, 31, 0x2F7528u);
    ctx->pc = 0x2F7524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7520u;
            // 0x2f7524: 0x24a51a38  addiu       $a1, $a1, 0x1A38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7528u; }
        if (ctx->pc != 0x2F7528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7528u; }
        if (ctx->pc != 0x2F7528u) { return; }
    }
    ctx->pc = 0x2F7528u;
label_2f7528:
    // 0x2f7528: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F7528u;
    {
        const bool branch_taken_0x2f7528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7528) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F7530u;
    // 0x2f7530: 0x8c5100f4  lw          $s1, 0xF4($v0)
    ctx->pc = 0x2f7530u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x2f7534: 0x12200058  beqz        $s1, . + 4 + (0x58 << 2)
    ctx->pc = 0x2F7534u;
    {
        const bool branch_taken_0x2f7534 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7534u;
            // 0x2f7538: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7534) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F753Cu;
    // 0x2f753c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7540: 0x24a51a40  addiu       $a1, $a1, 0x1A40
    ctx->pc = 0x2f7540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6720));
    // 0x2f7544: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2F7544u;
    SET_GPR_U32(ctx, 31, 0x2F754Cu);
    ctx->pc = 0x2F7548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7544u;
            // 0x2f7548: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F754Cu; }
        if (ctx->pc != 0x2F754Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F754Cu; }
        if (ctx->pc != 0x2F754Cu) { return; }
    }
    ctx->pc = 0x2F754Cu;
label_2f754c:
    // 0x2f754c: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2F754Cu;
    {
        const bool branch_taken_0x2f754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f754c) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F7554u;
    // 0x2f7554: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x2f7554u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f7558: 0xc04bc60  jal         func_12F180
    ctx->pc = 0x2F7558u;
    SET_GPR_U32(ctx, 31, 0x2F7560u);
    ctx->pc = 0x2F755Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7558u;
            // 0x2f755c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F180u;
    if (runtime->hasFunction(0x12F180u)) {
        auto targetFn = runtime->lookupFunction(0x12F180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7560u; }
        if (ctx->pc != 0x2F7560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexAnime__17mgCTextureManagerFi_0x12f180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7560u; }
        if (ctx->pc != 0x2F7560u) { return; }
    }
    ctx->pc = 0x2F7560u;
label_2f7560:
    // 0x2f7560: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f7560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7564: 0x1240004c  beqz        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x2F7564u;
    {
        const bool branch_taken_0x2f7564 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7564u;
            // 0x2f7568: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7564) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F756Cu;
    // 0x2f756c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f756cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7570: 0xc04f4c8  jal         func_13D320
    ctx->pc = 0x2F7570u;
    SET_GPR_U32(ctx, 31, 0x2F7578u);
    ctx->pc = 0x2F7574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7570u;
            // 0x2f7574: 0x24a51a38  addiu       $a1, $a1, 0x1A38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D320u;
    if (runtime->hasFunction(0x13D320u)) {
        auto targetFn = runtime->lookupFunction(0x13D320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7578u; }
        if (ctx->pc != 0x2F7578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchGroupName__15mgCTextureAnimeFPc_0x13d320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7578u; }
        if (ctx->pc != 0x2F7578u) { return; }
    }
    ctx->pc = 0x2F7578u;
label_2f7578:
    // 0x2f7578: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f757c: 0xc04f620  jal         func_13D880
    ctx->pc = 0x2F757Cu;
    SET_GPR_U32(ctx, 31, 0x2F7584u);
    ctx->pc = 0x2F7580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F757Cu;
            // 0x2f7580: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D880u;
    if (runtime->hasFunction(0x13D880u)) {
        auto targetFn = runtime->lookupFunction(0x13D880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7584u; }
        if (ctx->pc != 0x2F7584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnimeList__15mgCTextureAnimeFi_0x13d880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7584u; }
        if (ctx->pc != 0x2F7584u) { return; }
    }
    ctx->pc = 0x2F7584u;
label_2f7584:
    // 0x2f7584: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F7584u;
    {
        const bool branch_taken_0x2f7584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7584u;
            // 0x2f7588: 0x24460008  addiu       $a2, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7584) {
            ctx->pc = 0x2F7698u;
            goto label_2f7698;
        }
    }
    ctx->pc = 0x2F758Cu;
    // 0x2f758c: 0x84420026  lh          $v0, 0x26($v0)
    ctx->pc = 0x2f758cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x2f7590: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7590u;
    {
        const bool branch_taken_0x2f7590 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F7594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7590u;
            // 0x2f7594: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7590) {
            ctx->pc = 0x2F75A0u;
            goto label_2f75a0;
        }
    }
    ctx->pc = 0x2F7598u;
    // 0x2f7598: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x2f7598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2f759c: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2f759cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_2f75a0:
    // 0x2f75a0: 0x84c20022  lh          $v0, 0x22($a2)
    ctx->pc = 0x2f75a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 34)));
    // 0x2f75a4: 0x2445ffec  addiu       $a1, $v0, -0x14
    ctx->pc = 0x2f75a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x2f75a8: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F75A8u;
    {
        const bool branch_taken_0x2f75a8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2f75a8) {
            ctx->pc = 0x2F75B4u;
            goto label_2f75b4;
        }
    }
    ctx->pc = 0x2F75B0u;
    // 0x2f75b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f75b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f75b4:
    // 0x2f75b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f75b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f75b8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2f75b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f75bc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2F75BCu;
    {
        const bool branch_taken_0x2f75bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F75C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F75BCu;
            // 0x2f75c0: 0x32040  sll         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75bc) {
            ctx->pc = 0x2F75ECu;
            goto label_2f75ec;
        }
    }
    ctx->pc = 0x2F75C4u;
    // 0x2f75c4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2f75c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f75c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f75c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f75cc: 0x0  nop
    ctx->pc = 0x2f75ccu;
    // NOP
    // 0x2f75d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f75d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f75d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f75d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f75d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2f75d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2f75dc: 0x0  nop
    ctx->pc = 0x2f75dcu;
    // NOP
    // 0x2f75e0: 0x0  nop
    ctx->pc = 0x2f75e0u;
    // NOP
    // 0x2f75e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F75E4u;
    {
        const bool branch_taken_0x2f75e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f75e4) {
            ctx->pc = 0x2F7628u;
            goto label_2f7628;
        }
    }
    ctx->pc = 0x2F75ECu;
label_2f75ec:
    // 0x2f75ec: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2f75ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f75f0: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x2f75f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f75f4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2F75F4u;
    {
        const bool branch_taken_0x2f75f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f75f4) {
            ctx->pc = 0x2F7628u;
            goto label_2f7628;
        }
    }
    ctx->pc = 0x2F75FCu;
    // 0x2f75fc: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x2f75fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2f7600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f7600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7604: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f7604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7608: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f7608u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f760c: 0x0  nop
    ctx->pc = 0x2f760cu;
    // NOP
    // 0x2f7610: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f7610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f7614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f7614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f7618: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2f7618u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2f761c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f761cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7620: 0x0  nop
    ctx->pc = 0x2f7620u;
    // NOP
    // 0x2f7624: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f7624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2f7628:
    // 0x2f7628: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x2f7628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x2f762c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2f762cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x2f7630: 0x84c40022  lh          $a0, 0x22($a2)
    ctx->pc = 0x2f7630u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 34)));
    // 0x2f7634: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2f7634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2f7638: 0x84c3001e  lh          $v1, 0x1E($a2)
    ctx->pc = 0x2f7638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x2f763c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f763cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7640: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2f7640u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f7644: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f7644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7648: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2f7648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2f764c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f764cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f7650: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2f7650u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2f7654: 0x0  nop
    ctx->pc = 0x2f7654u;
    // NOP
    // 0x2f7658: 0x0  nop
    ctx->pc = 0x2f7658u;
    // NOP
    // 0x2f765c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2F765Cu;
    SET_GPR_U32(ctx, 31, 0x2F7664u);
    ctx->pc = 0x2F7660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F765Cu;
            // 0x2f7660: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7664u; }
        if (ctx->pc != 0x2F7664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7664u; }
        if (ctx->pc != 0x2F7664u) { return; }
    }
    ctx->pc = 0x2F7664u;
label_2f7664:
    // 0x2f7664: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f7664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f7668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f766c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2f766cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f7670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f7670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7674: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2f7674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2f7678: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f7678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f767c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f767cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7680: 0x0  nop
    ctx->pc = 0x2f7680u;
    // NOP
    // 0x2f7684: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2f7684u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2f7688: 0x0  nop
    ctx->pc = 0x2f7688u;
    // NOP
    // 0x2f768c: 0x0  nop
    ctx->pc = 0x2f768cu;
    // NOP
    // 0x2f7690: 0xc04df4c  jal         func_137D30
    ctx->pc = 0x2F7690u;
    SET_GPR_U32(ctx, 31, 0x2F7698u);
    ctx->pc = 0x137D30u;
    if (runtime->hasFunction(0x137D30u)) {
        auto targetFn = runtime->lookupFunction(0x137D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7698u; }
        if (ctx->pc != 0x2F7698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParamObjAlpha__8mgCFrameFfi_0x137d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7698u; }
        if (ctx->pc != 0x2F7698u) { return; }
    }
    ctx->pc = 0x2F7698u;
label_2f7698:
    // 0x2f7698: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f7698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f769c:
    // 0x2f769c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f769cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f76a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f76a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f76a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f76a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f76a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f76a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f76ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F76ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F76B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F76ACu;
            // 0x2f76b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F76B4u;
}
