#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteVillager__6CSceneFv
// Address: 0x2c9710 - 0x2c97c0
void DeleteVillager__6CSceneFv_0x2c9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteVillager__6CSceneFv_0x2c9710");
#endif

    switch (ctx->pc) {
        case 0x2c973cu: goto label_2c973c;
        case 0x2c9744u: goto label_2c9744;
        case 0x2c9758u: goto label_2c9758;
        case 0x2c9768u: goto label_2c9768;
        case 0x2c9774u: goto label_2c9774;
        case 0x2c9780u: goto label_2c9780;
        case 0x2c979cu: goto label_2c979c;
        default: break;
    }

    ctx->pc = 0x2c9710u;

    // 0x2c9710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c9710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c9714: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c9714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c9718: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c9718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c971c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9720: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c9720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9724: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c972c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c972cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9730: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2c9730u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2c9734: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2c9734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x2c9738: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2c9738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2c973c:
    // 0x2c973c: 0xc0a1240  jal         func_284900
    ctx->pc = 0x2C973Cu;
    SET_GPR_U32(ctx, 31, 0x2C9744u);
    ctx->pc = 0x2C9740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C973Cu;
            // 0x2c9740: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9744u; }
        if (ctx->pc != 0x2C9744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9744u; }
        if (ctx->pc != 0x2C9744u) { return; }
    }
    ctx->pc = 0x2C9744u;
label_2c9744:
    // 0x2c9744: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9748: 0x1a400007  blez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9748u;
    {
        const bool branch_taken_0x2c9748 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2C974Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9748u;
            // 0x2c974c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9748) {
            ctx->pc = 0x2C9768u;
            goto label_2c9768;
        }
    }
    ctx->pc = 0x2C9750u;
    // 0x2c9750: 0xc0b253c  jal         func_2C94F0
    ctx->pc = 0x2C9750u;
    SET_GPR_U32(ctx, 31, 0x2C9758u);
    ctx->pc = 0x2C9754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9750u;
            // 0x2c9754: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C94F0u;
    if (runtime->hasFunction(0x2C94F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C94F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9758u; }
        if (ctx->pc != 0x2C9758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchCharaTexb__6CSceneFi_0x2c94f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9758u; }
        if (ctx->pc != 0x2C9758u) { return; }
    }
    ctx->pc = 0x2C9758u;
label_2c9758:
    // 0x2c9758: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9758u;
    {
        const bool branch_taken_0x2c9758 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C975Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9758u;
            // 0x2c975c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9758) {
            ctx->pc = 0x2C9768u;
            goto label_2c9768;
        }
    }
    ctx->pc = 0x2C9760u;
    // 0x2c9760: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2C9760u;
    SET_GPR_U32(ctx, 31, 0x2C9768u);
    ctx->pc = 0x2C9764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9760u;
            // 0x2c9764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9768u; }
        if (ctx->pc != 0x2C9768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9768u; }
        if (ctx->pc != 0x2C9768u) { return; }
    }
    ctx->pc = 0x2C9768u;
label_2c9768:
    // 0x2c9768: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2c9768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2c976c: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x2C976Cu;
    SET_GPR_U32(ctx, 31, 0x2C9774u);
    ctx->pc = 0x2C9770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C976Cu;
            // 0x2c9770: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9774u; }
        if (ctx->pc != 0x2C9774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9774u; }
        if (ctx->pc != 0x2C9774u) { return; }
    }
    ctx->pc = 0x2C9774u;
label_2c9774:
    // 0x2c9774: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2c9774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2c9778: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2C9778u;
    SET_GPR_U32(ctx, 31, 0x2C9780u);
    ctx->pc = 0x2C977Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9778u;
            // 0x2c977c: 0x26643050  addiu       $a0, $s3, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (runtime->hasFunction(0x2CD470u)) {
        auto targetFn = runtime->lookupFunction(0x2CD470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9780u; }
        if (ctx->pc != 0x2C9780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteCharaID__13CVillagerMngrFi_0x2cd470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9780u; }
        if (ctx->pc != 0x2C9780u) { return; }
    }
    ctx->pc = 0x2C9780u;
label_2c9780:
    // 0x2c9780: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c9780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c9784: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x2c9784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c9788: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C9788u;
    {
        const bool branch_taken_0x2c9788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9788u;
            // 0x2c978c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9788) {
            ctx->pc = 0x2C973Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c973c;
        }
    }
    ctx->pc = 0x2C9790u;
    // 0x2c9790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c9790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9794: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x2C9794u;
    SET_GPR_U32(ctx, 31, 0x2C979Cu);
    ctx->pc = 0x2C9798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9794u;
            // 0x2c9798: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (runtime->hasFunction(0x2831D0u)) {
        auto targetFn = runtime->lookupFunction(0x2831D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C979Cu; }
        if (ctx->pc != 0x2C979Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearStack__6CSceneFi_0x2831d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C979Cu; }
        if (ctx->pc != 0x2C979Cu) { return; }
    }
    ctx->pc = 0x2C979Cu;
label_2c979c:
    // 0x2c979c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c979cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c97a0: 0xae633e60  sw          $v1, 0x3E60($s3)
    ctx->pc = 0x2c97a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15968), GPR_U32(ctx, 3));
    // 0x2c97a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c97a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c97a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c97a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c97ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c97acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c97b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c97b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c97b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c97b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c97b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C97B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C97BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C97B8u;
            // 0x2c97bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C97C0u;
}
