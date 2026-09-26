#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetTexAnim__10CEohMotherFiiPc
// Address: 0x25e770 - 0x25e82c
void SetTexAnim__10CEohMotherFiiPc_0x25e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTexAnim__10CEohMotherFiiPc_0x25e770");
#endif

    switch (ctx->pc) {
        case 0x25e7c4u: goto label_25e7c4;
        case 0x25e7e8u: goto label_25e7e8;
        case 0x25e804u: goto label_25e804;
        case 0x25e814u: goto label_25e814;
        default: break;
    }

    ctx->pc = 0x25e770u;

    // 0x25e770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e77c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e780: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x25e780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e784: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E784u;
    {
        const bool branch_taken_0x25e784 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E784u;
            // 0x25e788: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e784) {
            ctx->pc = 0x25E798u;
            goto label_25e798;
        }
    }
    ctx->pc = 0x25E78Cu;
    // 0x25e78c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25e790: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E790u;
    {
        const bool branch_taken_0x25e790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E790u;
            // 0x25e794: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e790) {
            ctx->pc = 0x25E7A0u;
            goto label_25e7a0;
        }
    }
    ctx->pc = 0x25E798u;
label_25e798:
    // 0x25e798: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x25E798u;
    {
        const bool branch_taken_0x25e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E798u;
            // 0x25e79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e798) {
            ctx->pc = 0x25E818u;
            goto label_25e818;
        }
    }
    ctx->pc = 0x25E7A0u;
label_25e7a0:
    // 0x25e7a0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25e7a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e7a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E7A8u;
    {
        const bool branch_taken_0x25e7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e7a8) {
            ctx->pc = 0x25E7B8u;
            goto label_25e7b8;
        }
    }
    ctx->pc = 0x25E7B0u;
    // 0x25e7b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25E7B0u;
    {
        const bool branch_taken_0x25e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7B0u;
            // 0x25e7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7b0) {
            ctx->pc = 0x25E818u;
            goto label_25e818;
        }
    }
    ctx->pc = 0x25E7B8u;
label_25e7b8:
    // 0x25e7b8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x25e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x25e7bc: 0xc0a1240  jal         func_284900
    ctx->pc = 0x25E7BCu;
    SET_GPR_U32(ctx, 31, 0x25E7C4u);
    ctx->pc = 0x25E7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7BCu;
            // 0x25e7c0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7C4u; }
        if (ctx->pc != 0x25E7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7C4u; }
        if (ctx->pc != 0x25E7C4u) { return; }
    }
    ctx->pc = 0x25E7C4u;
label_25e7c4:
    // 0x25e7c4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E7C4u;
    {
        const bool branch_taken_0x25e7c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7C4u;
            // 0x25e7c8: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7c4) {
            ctx->pc = 0x25E7D4u;
            goto label_25e7d4;
        }
    }
    ctx->pc = 0x25E7CCu;
    // 0x25e7cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25E7CCu;
    {
        const bool branch_taken_0x25e7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7CCu;
            // 0x25e7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7cc) {
            ctx->pc = 0x25E818u;
            goto label_25e818;
        }
    }
    ctx->pc = 0x25E7D4u;
label_25e7d4:
    // 0x25e7d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E7D4u;
    {
        const bool branch_taken_0x25e7d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7D4u;
            // 0x25e7d8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7d4) {
            ctx->pc = 0x25E7F0u;
            goto label_25e7f0;
        }
    }
    ctx->pc = 0x25E7DCu;
    // 0x25e7dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25e7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7e0: 0xc04bbdc  jal         func_12EF70
    ctx->pc = 0x25E7E0u;
    SET_GPR_U32(ctx, 31, 0x25E7E8u);
    ctx->pc = 0x25E7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7E0u;
            // 0x25e7e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EF70u;
    if (runtime->hasFunction(0x12EF70u)) {
        auto targetFn = runtime->lookupFunction(0x12EF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7E8u; }
        if (ctx->pc != 0x25E7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeOn__17mgCTextureManagerFiPc_0x12ef70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E7E8u; }
        if (ctx->pc != 0x25E7E8u) { return; }
    }
    ctx->pc = 0x25E7E8u;
label_25e7e8:
    // 0x25e7e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25E7E8u;
    {
        const bool branch_taken_0x25e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7E8u;
            // 0x25e7ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7e8) {
            ctx->pc = 0x25E818u;
            goto label_25e818;
        }
    }
    ctx->pc = 0x25E7F0u;
label_25e7f0:
    // 0x25e7f0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E7F0u;
    {
        const bool branch_taken_0x25e7f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7F0u;
            // 0x25e7f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7f0) {
            ctx->pc = 0x25E80Cu;
            goto label_25e80c;
        }
    }
    ctx->pc = 0x25E7F8u;
    // 0x25e7f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25e7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e7fc: 0xc04bbf8  jal         func_12EFE0
    ctx->pc = 0x25E7FCu;
    SET_GPR_U32(ctx, 31, 0x25E804u);
    ctx->pc = 0x25E800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E7FCu;
            // 0x25e800: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFE0u;
    if (runtime->hasFunction(0x12EFE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E804u; }
        if (ctx->pc != 0x25E804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeOff__17mgCTextureManagerFiPc_0x12efe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E804u; }
        if (ctx->pc != 0x25E804u) { return; }
    }
    ctx->pc = 0x25E804u;
label_25e804:
    // 0x25e804: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E804u;
    {
        const bool branch_taken_0x25e804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e804) {
            ctx->pc = 0x25E814u;
            goto label_25e814;
        }
    }
    ctx->pc = 0x25E80Cu;
label_25e80c:
    // 0x25e80c: 0xc04bc14  jal         func_12F050
    ctx->pc = 0x25E80Cu;
    SET_GPR_U32(ctx, 31, 0x25E814u);
    ctx->pc = 0x12F050u;
    if (runtime->hasFunction(0x12F050u)) {
        auto targetFn = runtime->lookupFunction(0x12F050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E814u; }
        if (ctx->pc != 0x25E814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeAllOff__17mgCTextureManagerFi_0x12f050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E814u; }
        if (ctx->pc != 0x25E814u) { return; }
    }
    ctx->pc = 0x25E814u;
label_25e814:
    // 0x25e814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e818:
    // 0x25e818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e81c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e81cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e824: 0x3e00008  jr          $ra
    ctx->pc = 0x25E824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E824u;
            // 0x25e828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25E82Cu;
}
