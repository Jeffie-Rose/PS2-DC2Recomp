#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteSubVillager__6CSceneFv
// Address: 0x2c9660 - 0x2c9710
void DeleteSubVillager__6CSceneFv_0x2c9660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteSubVillager__6CSceneFv_0x2c9660");
#endif

    switch (ctx->pc) {
        case 0x2c968cu: goto label_2c968c;
        case 0x2c9694u: goto label_2c9694;
        case 0x2c96a8u: goto label_2c96a8;
        case 0x2c96b8u: goto label_2c96b8;
        case 0x2c96c4u: goto label_2c96c4;
        case 0x2c96d0u: goto label_2c96d0;
        case 0x2c96ecu: goto label_2c96ec;
        default: break;
    }

    ctx->pc = 0x2c9660u;

    // 0x2c9660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c9660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c9664: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c9668: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c9668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c966c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9670: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c9670u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9674: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c967c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c967cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9680: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2c9680u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2c9684: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2c9684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x2c9688: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x2c9688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2c968c:
    // 0x2c968c: 0xc0a1240  jal         func_284900
    ctx->pc = 0x2C968Cu;
    SET_GPR_U32(ctx, 31, 0x2C9694u);
    ctx->pc = 0x2C9690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C968Cu;
            // 0x2c9690: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9694u; }
        if (ctx->pc != 0x2C9694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9694u; }
        if (ctx->pc != 0x2C9694u) { return; }
    }
    ctx->pc = 0x2C9694u;
label_2c9694:
    // 0x2c9694: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9698: 0x1a400007  blez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C9698u;
    {
        const bool branch_taken_0x2c9698 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2C969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9698u;
            // 0x2c969c: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9698) {
            ctx->pc = 0x2C96B8u;
            goto label_2c96b8;
        }
    }
    ctx->pc = 0x2C96A0u;
    // 0x2c96a0: 0xc0b253c  jal         func_2C94F0
    ctx->pc = 0x2C96A0u;
    SET_GPR_U32(ctx, 31, 0x2C96A8u);
    ctx->pc = 0x2C96A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C96A0u;
            // 0x2c96a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C94F0u;
    if (runtime->hasFunction(0x2C94F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C94F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96A8u; }
        if (ctx->pc != 0x2C96A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchCharaTexb__6CSceneFi_0x2c94f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96A8u; }
        if (ctx->pc != 0x2C96A8u) { return; }
    }
    ctx->pc = 0x2C96A8u;
label_2c96a8:
    // 0x2c96a8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C96A8u;
    {
        const bool branch_taken_0x2c96a8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C96ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C96A8u;
            // 0x2c96ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96a8) {
            ctx->pc = 0x2C96B8u;
            goto label_2c96b8;
        }
    }
    ctx->pc = 0x2C96B0u;
    // 0x2c96b0: 0xc04b950  jal         func_12E540
    ctx->pc = 0x2C96B0u;
    SET_GPR_U32(ctx, 31, 0x2C96B8u);
    ctx->pc = 0x2C96B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C96B0u;
            // 0x2c96b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96B8u; }
        if (ctx->pc != 0x2C96B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96B8u; }
        if (ctx->pc != 0x2C96B8u) { return; }
    }
    ctx->pc = 0x2C96B8u;
label_2c96b8:
    // 0x2c96b8: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x2c96b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2c96bc: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x2C96BCu;
    SET_GPR_U32(ctx, 31, 0x2C96C4u);
    ctx->pc = 0x2C96C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C96BCu;
            // 0x2c96c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96C4u; }
        if (ctx->pc != 0x2C96C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96C4u; }
        if (ctx->pc != 0x2C96C4u) { return; }
    }
    ctx->pc = 0x2C96C4u;
label_2c96c4:
    // 0x2c96c4: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x2c96c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2c96c8: 0xc0b351c  jal         func_2CD470
    ctx->pc = 0x2C96C8u;
    SET_GPR_U32(ctx, 31, 0x2C96D0u);
    ctx->pc = 0x2C96CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C96C8u;
            // 0x2c96cc: 0x26643050  addiu       $a0, $s3, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD470u;
    if (runtime->hasFunction(0x2CD470u)) {
        auto targetFn = runtime->lookupFunction(0x2CD470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96D0u; }
        if (ctx->pc != 0x2C96D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteCharaID__13CVillagerMngrFi_0x2cd470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96D0u; }
        if (ctx->pc != 0x2C96D0u) { return; }
    }
    ctx->pc = 0x2C96D0u;
label_2c96d0:
    // 0x2c96d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c96d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c96d4: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2c96d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c96d8: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C96D8u;
    {
        const bool branch_taken_0x2c96d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C96DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C96D8u;
            // 0x2c96dc: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96d8) {
            ctx->pc = 0x2C968Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c968c;
        }
    }
    ctx->pc = 0x2C96E0u;
    // 0x2c96e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c96e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c96e4: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x2C96E4u;
    SET_GPR_U32(ctx, 31, 0x2C96ECu);
    ctx->pc = 0x2C96E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C96E4u;
            // 0x2c96e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (runtime->hasFunction(0x2831D0u)) {
        auto targetFn = runtime->lookupFunction(0x2831D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96ECu; }
        if (ctx->pc != 0x2C96ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearStack__6CSceneFi_0x2831d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C96ECu; }
        if (ctx->pc != 0x2C96ECu) { return; }
    }
    ctx->pc = 0x2C96ECu;
label_2c96ec:
    // 0x2c96ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c96f0: 0xae633e64  sw          $v1, 0x3E64($s3)
    ctx->pc = 0x2c96f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 15972), GPR_U32(ctx, 3));
    // 0x2c96f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c96f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c96f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c96f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c96fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c96fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9708: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9708u;
            // 0x2c970c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9710u;
}
