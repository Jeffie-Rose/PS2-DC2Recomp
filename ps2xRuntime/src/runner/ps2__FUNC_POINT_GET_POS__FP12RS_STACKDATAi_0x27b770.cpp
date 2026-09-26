#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _FUNC_POINT_GET_POS__FP12RS_STACKDATAi
// Address: 0x27b770 - 0x27b8e4
void ps2__FUNC_POINT_GET_POS__FP12RS_STACKDATAi_0x27b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__FUNC_POINT_GET_POS__FP12RS_STACKDATAi_0x27b770");
#endif

    switch (ctx->pc) {
        case 0x27b798u: goto label_27b798;
        case 0x27b7d4u: goto label_27b7d4;
        case 0x27b7e4u: goto label_27b7e4;
        case 0x27b7f0u: goto label_27b7f0;
        case 0x27b808u: goto label_27b808;
        case 0x27b818u: goto label_27b818;
        case 0x27b828u: goto label_27b828;
        case 0x27b83cu: goto label_27b83c;
        case 0x27b850u: goto label_27b850;
        case 0x27b868u: goto label_27b868;
        case 0x27b878u: goto label_27b878;
        case 0x27b8a8u: goto label_27b8a8;
        case 0x27b8b8u: goto label_27b8b8;
        case 0x27b8c4u: goto label_27b8c4;
        default: break;
    }

    ctx->pc = 0x27b770u;

    // 0x27b770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27b774: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27b774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27b778: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27b77c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27b77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27b780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b784: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b78c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27b78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27b790: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x27B790u;
    SET_GPR_U32(ctx, 31, 0x27B798u);
    ctx->pc = 0x27B794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B790u;
            // 0x27b794: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B798u; }
        if (ctx->pc != 0x27B798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B798u; }
        if (ctx->pc != 0x27B798u) { return; }
    }
    ctx->pc = 0x27B798u;
label_27b798:
    // 0x27b798: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27b798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b79c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B79Cu;
    {
        const bool branch_taken_0x27b79c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B79Cu;
            // 0x27b7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b79c) {
            ctx->pc = 0x27B7ACu;
            goto label_27b7ac;
        }
    }
    ctx->pc = 0x27B7A4u;
    // 0x27b7a4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x27B7A4u;
    {
        const bool branch_taken_0x27b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7A4u;
            // 0x27b7a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7a4) {
            ctx->pc = 0x27B8CCu;
            goto label_27b8cc;
        }
    }
    ctx->pc = 0x27B7ACu;
label_27b7ac:
    // 0x27b7ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27b7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27b7b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b7b4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27B7B4u;
    {
        const bool branch_taken_0x27b7b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27B7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7B4u;
            // 0x27b7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7b4) {
            ctx->pc = 0x27B810u;
            goto label_27b810;
        }
    }
    ctx->pc = 0x27B7BCu;
    // 0x27b7bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B7BCu;
    {
        const bool branch_taken_0x27b7bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7BCu;
            // 0x27b7c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7bc) {
            ctx->pc = 0x27B7CCu;
            goto label_27b7cc;
        }
    }
    ctx->pc = 0x27B7C4u;
    // 0x27b7c4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x27B7C4u;
    {
        const bool branch_taken_0x27b7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b7c4) {
            ctx->pc = 0x27B87Cu;
            goto label_27b87c;
        }
    }
    ctx->pc = 0x27B7CCu;
label_27b7cc:
    // 0x27b7cc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27B7CCu;
    SET_GPR_U32(ctx, 31, 0x27B7D4u);
    ctx->pc = 0x27B7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7CCu;
            // 0x27b7d0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7D4u; }
        if (ctx->pc != 0x27B7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7D4u; }
        if (ctx->pc != 0x27B7D4u) { return; }
    }
    ctx->pc = 0x27B7D4u;
label_27b7d4:
    // 0x27b7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b7d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27b7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b7dc: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27B7DCu;
    SET_GPR_U32(ctx, 31, 0x27B7E4u);
    ctx->pc = 0x27B7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7DCu;
            // 0x27b7e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7E4u; }
        if (ctx->pc != 0x27B7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7E4u; }
        if (ctx->pc != 0x27B7E4u) { return; }
    }
    ctx->pc = 0x27B7E4u;
label_27b7e4:
    // 0x27b7e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b7e8: 0xc057530  jal         func_15D4C0
    ctx->pc = 0x27B7E8u;
    SET_GPR_U32(ctx, 31, 0x27B7F0u);
    ctx->pc = 0x27B7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7E8u;
            // 0x27b7ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4C0u;
    if (runtime->hasFunction(0x15D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7F0u; }
        if (ctx->pc != 0x27B7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFi_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B7F0u; }
        if (ctx->pc != 0x27B7F0u) { return; }
    }
    ctx->pc = 0x27B7F0u;
label_27b7f0:
    // 0x27b7f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B7F0u;
    {
        const bool branch_taken_0x27b7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7F0u;
            // 0x27b7f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7f0) {
            ctx->pc = 0x27B800u;
            goto label_27b800;
        }
    }
    ctx->pc = 0x27B7F8u;
    // 0x27b7f8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x27B7F8u;
    {
        const bool branch_taken_0x27b7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B7F8u;
            // 0x27b7fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b7f8) {
            ctx->pc = 0x27B8C8u;
            goto label_27b8c8;
        }
    }
    ctx->pc = 0x27B800u;
label_27b800:
    // 0x27b800: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x27B800u;
    SET_GPR_U32(ctx, 31, 0x27B808u);
    ctx->pc = 0x27B804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B800u;
            // 0x27b804: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B808u; }
        if (ctx->pc != 0x27B808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B808u; }
        if (ctx->pc != 0x27B808u) { return; }
    }
    ctx->pc = 0x27B808u;
label_27b808:
    // 0x27b808: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27B808u;
    {
        const bool branch_taken_0x27b808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B808u;
            // 0x27b80c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b808) {
            ctx->pc = 0x27B87Cu;
            goto label_27b87c;
        }
    }
    ctx->pc = 0x27B810u;
label_27b810:
    // 0x27b810: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27B810u;
    SET_GPR_U32(ctx, 31, 0x27B818u);
    ctx->pc = 0x27B814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B810u;
            // 0x27b814: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B818u; }
        if (ctx->pc != 0x27B818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B818u; }
        if (ctx->pc != 0x27B818u) { return; }
    }
    ctx->pc = 0x27B818u;
label_27b818:
    // 0x27b818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b81c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b820: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27B820u;
    SET_GPR_U32(ctx, 31, 0x27B828u);
    ctx->pc = 0x27B824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B820u;
            // 0x27b824: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B828u; }
        if (ctx->pc != 0x27B828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B828u; }
        if (ctx->pc != 0x27B828u) { return; }
    }
    ctx->pc = 0x27B828u;
label_27b828:
    // 0x27b828: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x27b828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x27b82c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27b82cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b834: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x27B834u;
    SET_GPR_U32(ctx, 31, 0x27B83Cu);
    ctx->pc = 0x27B838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B834u;
            // 0x27b838: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B83Cu; }
        if (ctx->pc != 0x27B83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B83Cu; }
        if (ctx->pc != 0x27B83Cu) { return; }
    }
    ctx->pc = 0x27B83Cu;
label_27b83c:
    // 0x27b83c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27B83Cu;
    {
        const bool branch_taken_0x27b83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B83Cu;
            // 0x27b840: 0x26440cb0  addiu       $a0, $s2, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b83c) {
            ctx->pc = 0x27B870u;
            goto label_27b870;
        }
    }
    ctx->pc = 0x27B844u;
    // 0x27b844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27b844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b848: 0xc057508  jal         func_15D420
    ctx->pc = 0x27B848u;
    SET_GPR_U32(ctx, 31, 0x27B850u);
    ctx->pc = 0x27B84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B848u;
            // 0x27b84c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B850u; }
        if (ctx->pc != 0x27B850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B850u; }
        if (ctx->pc != 0x27B850u) { return; }
    }
    ctx->pc = 0x27B850u;
label_27b850:
    // 0x27b850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B850u;
    {
        const bool branch_taken_0x27b850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B850u;
            // 0x27b854: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b850) {
            ctx->pc = 0x27B860u;
            goto label_27b860;
        }
    }
    ctx->pc = 0x27B858u;
    // 0x27b858: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27B858u;
    {
        const bool branch_taken_0x27b858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B858u;
            // 0x27b85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b858) {
            ctx->pc = 0x27B8C8u;
            goto label_27b8c8;
        }
    }
    ctx->pc = 0x27B860u;
label_27b860:
    // 0x27b860: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x27B860u;
    SET_GPR_U32(ctx, 31, 0x27B868u);
    ctx->pc = 0x27B864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B860u;
            // 0x27b864: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B868u; }
        if (ctx->pc != 0x27B868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B868u; }
        if (ctx->pc != 0x27B868u) { return; }
    }
    ctx->pc = 0x27B868u;
label_27b868:
    // 0x27b868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27B868u;
    {
        const bool branch_taken_0x27b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B868u;
            // 0x27b86c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b868) {
            ctx->pc = 0x27B87Cu;
            goto label_27b87c;
        }
    }
    ctx->pc = 0x27B870u;
label_27b870:
    // 0x27b870: 0xc0a763c  jal         func_29D8F0
    ctx->pc = 0x27B870u;
    SET_GPR_U32(ctx, 31, 0x27B878u);
    ctx->pc = 0x27B874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B870u;
            // 0x27b874: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B878u; }
        if (ctx->pc != 0x27B878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B878u; }
        if (ctx->pc != 0x27B878u) { return; }
    }
    ctx->pc = 0x27B878u;
label_27b878:
    // 0x27b878: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27b878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b87c:
    // 0x27b87c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B87Cu;
    {
        const bool branch_taken_0x27b87c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B87Cu;
            // 0x27b880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b87c) {
            ctx->pc = 0x27B88Cu;
            goto label_27b88c;
        }
    }
    ctx->pc = 0x27B884u;
    // 0x27b884: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27B884u;
    {
        const bool branch_taken_0x27b884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b884) {
            ctx->pc = 0x27B8C8u;
            goto label_27b8c8;
        }
    }
    ctx->pc = 0x27B88Cu;
label_27b88c:
    // 0x27b88c: 0x7a230180  lq          $v1, 0x180($s1)
    ctx->pc = 0x27b88cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x27b890: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27b890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27b894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b898: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27b898u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27b89c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x27b89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27b8a0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27B8A0u;
    SET_GPR_U32(ctx, 31, 0x27B8A8u);
    ctx->pc = 0x27B8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8A0u;
            // 0x27b8a4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8A8u; }
        if (ctx->pc != 0x27B8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8A8u; }
        if (ctx->pc != 0x27B8A8u) { return; }
    }
    ctx->pc = 0x27B8A8u;
label_27b8a8:
    // 0x27b8a8: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x27b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27b8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27b8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b8b0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27B8B0u;
    SET_GPR_U32(ctx, 31, 0x27B8B8u);
    ctx->pc = 0x27B8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8B0u;
            // 0x27b8b4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8B8u; }
        if (ctx->pc != 0x27B8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8B8u; }
        if (ctx->pc != 0x27B8B8u) { return; }
    }
    ctx->pc = 0x27B8B8u;
label_27b8b8:
    // 0x27b8b8: 0xc7ac0058  lwc1        $f12, 0x58($sp)
    ctx->pc = 0x27b8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27b8bc: 0xc097e54  jal         func_25F950
    ctx->pc = 0x27B8BCu;
    SET_GPR_U32(ctx, 31, 0x27B8C4u);
    ctx->pc = 0x27B8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8BCu;
            // 0x27b8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8C4u; }
        if (ctx->pc != 0x27B8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B8C4u; }
        if (ctx->pc != 0x27B8C4u) { return; }
    }
    ctx->pc = 0x27B8C4u;
label_27b8c4:
    // 0x27b8c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b8c8:
    // 0x27b8c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27b8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27b8cc:
    // 0x27b8cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27b8ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b8d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b8d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b8d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b8d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x27B8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B8DCu;
            // 0x27b8e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B8E4u;
}
