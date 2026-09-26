#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignCamera__6CSceneFiP9mgCCameraPc
// Address: 0x283740 - 0x283820
void AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignCamera__6CSceneFiP9mgCCameraPc_0x283740");
#endif

    switch (ctx->pc) {
        case 0x283774u: goto label_283774;
        case 0x28377cu: goto label_28377c;
        case 0x2837c0u: goto label_2837c0;
        case 0x2837f8u: goto label_2837f8;
        default: break;
    }

    ctx->pc = 0x283740u;

    // 0x283740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x283744: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x283744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x283748: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x283748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28374c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x283750: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x283750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283758: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x283758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28375c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28375cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283760: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x283760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283764: 0x6610014  bgez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x283764u;
    {
        const bool branch_taken_0x283764 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x283768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283764u;
            // 0x283768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283764) {
            ctx->pc = 0x2837B8u;
            goto label_2837b8;
        }
    }
    ctx->pc = 0x28376Cu;
    // 0x28376c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28376Cu;
    {
        const bool branch_taken_0x28376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28376Cu;
            // 0x283770: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28376c) {
            ctx->pc = 0x28379Cu;
            goto label_28379c;
        }
    }
    ctx->pc = 0x283774u;
label_283774:
    // 0x283774: 0xc0a0d00  jal         func_283400
    ctx->pc = 0x283774u;
    SET_GPR_U32(ctx, 31, 0x28377Cu);
    ctx->pc = 0x283778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283774u;
            // 0x283778: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283400u;
    if (runtime->hasFunction(0x283400u)) {
        auto targetFn = runtime->lookupFunction(0x283400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28377Cu; }
        if (ctx->pc != 0x28377Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCamera__6CSceneFi_0x283400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28377Cu; }
        if (ctx->pc != 0x28377Cu) { return; }
    }
    ctx->pc = 0x28377Cu;
label_28377c:
    // 0x28377c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28377Cu;
    {
        const bool branch_taken_0x28377c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28377c) {
            ctx->pc = 0x283798u;
            goto label_283798;
        }
    }
    ctx->pc = 0x283784u;
    // 0x283784: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283788: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x283788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x28378c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28378cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283790: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283790u;
    {
        const bool branch_taken_0x283790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283790) {
            ctx->pc = 0x2837B0u;
            goto label_2837b0;
        }
    }
    ctx->pc = 0x283798u;
label_283798:
    // 0x283798: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x283798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28379c:
    // 0x28379c: 0x0  nop
    ctx->pc = 0x28379cu;
    // NOP
    // 0x2837a0: 0x8e022044  lw          $v0, 0x2044($s0)
    ctx->pc = 0x2837a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8260)));
    // 0x2837a4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2837a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2837a8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2837A8u;
    {
        const bool branch_taken_0x2837a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2837ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2837A8u;
            // 0x2837ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837a8) {
            ctx->pc = 0x283774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283774;
        }
    }
    ctx->pc = 0x2837B0u;
label_2837b0:
    // 0x2837b0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2837B0u;
    {
        const bool branch_taken_0x2837b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2837B0u;
            // 0x2837b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837b0) {
            ctx->pc = 0x283804u;
            goto label_283804;
        }
    }
    ctx->pc = 0x2837B8u;
label_2837b8:
    // 0x2837b8: 0xc0a0d00  jal         func_283400
    ctx->pc = 0x2837B8u;
    SET_GPR_U32(ctx, 31, 0x2837C0u);
    ctx->pc = 0x283400u;
    if (runtime->hasFunction(0x283400u)) {
        auto targetFn = runtime->lookupFunction(0x283400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2837C0u; }
        if (ctx->pc != 0x2837C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCamera__6CSceneFi_0x283400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2837C0u; }
        if (ctx->pc != 0x2837C0u) { return; }
    }
    ctx->pc = 0x2837C0u;
label_2837c0:
    // 0x2837c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2837C0u;
    {
        const bool branch_taken_0x2837c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2837c0) {
            ctx->pc = 0x2837D0u;
            goto label_2837d0;
        }
    }
    ctx->pc = 0x2837C8u;
    // 0x2837c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2837C8u;
    {
        const bool branch_taken_0x2837c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2837C8u;
            // 0x2837cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837c8) {
            ctx->pc = 0x283804u;
            goto label_283804;
        }
    }
    ctx->pc = 0x2837D0u;
label_2837d0:
    // 0x2837d0: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2837D0u;
    {
        const bool branch_taken_0x2837d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2837d0) {
            ctx->pc = 0x2837DCu;
            goto label_2837dc;
        }
    }
    ctx->pc = 0x2837D8u;
    // 0x2837d8: 0x279183f8  addiu       $s1, $gp, -0x7C08
    ctx->pc = 0x2837d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935544));
label_2837dc:
    // 0x2837dc: 0x8e032e54  lw          $v1, 0x2E54($s0)
    ctx->pc = 0x2837dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11860)));
    // 0x2837e0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2837E0u;
    {
        const bool branch_taken_0x2837e0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2837E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2837E0u;
            // 0x2837e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837e0) {
            ctx->pc = 0x2837ECu;
            goto label_2837ec;
        }
    }
    ctx->pc = 0x2837E8u;
    // 0x2837e8: 0xae132e54  sw          $s3, 0x2E54($s0)
    ctx->pc = 0x2837e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 19));
label_2837ec:
    // 0x2837ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2837ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2837f0: 0xc0a0b20  jal         func_282C80
    ctx->pc = 0x2837F0u;
    SET_GPR_U32(ctx, 31, 0x2837F8u);
    ctx->pc = 0x2837F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2837F0u;
            // 0x2837f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282C80u;
    if (runtime->hasFunction(0x282C80u)) {
        auto targetFn = runtime->lookupFunction(0x282C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2837F8u; }
        if (ctx->pc != 0x2837F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignData__12CSceneCameraFP9mgCCameraPc_0x282c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2837F8u; }
        if (ctx->pc != 0x2837F8u) { return; }
    }
    ctx->pc = 0x2837F8u;
label_2837f8:
    // 0x2837f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2837F8u;
    {
        const bool branch_taken_0x2837f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2837F8u;
            // 0x2837fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837f8) {
            ctx->pc = 0x283804u;
            goto label_283804;
        }
    }
    ctx->pc = 0x283800u;
    // 0x283800: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x283800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283804:
    // 0x283804: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x283804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283808: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x283808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28380c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28380cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283818: 0x3e00008  jr          $ra
    ctx->pc = 0x283818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283818u;
            // 0x28381c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283820u;
}
