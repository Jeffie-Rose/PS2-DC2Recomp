#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignMessage__6CSceneFiP6ClsMesPc
// Address: 0x283910 - 0x2839e0
void AssignMessage__6CSceneFiP6ClsMesPc_0x283910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignMessage__6CSceneFiP6ClsMesPc_0x283910");
#endif

    switch (ctx->pc) {
        case 0x283944u: goto label_283944;
        case 0x28394cu: goto label_28394c;
        case 0x283990u: goto label_283990;
        case 0x2839b8u: goto label_2839b8;
        default: break;
    }

    ctx->pc = 0x283910u;

    // 0x283910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x283914: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x283914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x283918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x283918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28391c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28391cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x283920: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x283920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283928: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x283928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28392c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283930: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x283930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283934: 0x6610014  bgez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x283934u;
    {
        const bool branch_taken_0x283934 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x283938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283934u;
            // 0x283938: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283934) {
            ctx->pc = 0x283988u;
            goto label_283988;
        }
    }
    ctx->pc = 0x28393Cu;
    // 0x28393c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28393Cu;
    {
        const bool branch_taken_0x28393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28393Cu;
            // 0x283940: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28393c) {
            ctx->pc = 0x28396Cu;
            goto label_28396c;
        }
    }
    ctx->pc = 0x283944u;
label_283944:
    // 0x283944: 0xc0a0cf0  jal         func_2833C0
    ctx->pc = 0x283944u;
    SET_GPR_U32(ctx, 31, 0x28394Cu);
    ctx->pc = 0x283948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283944u;
            // 0x283948: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2833C0u;
    if (runtime->hasFunction(0x2833C0u)) {
        auto targetFn = runtime->lookupFunction(0x2833C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28394Cu; }
        if (ctx->pc != 0x28394Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMessage__6CSceneFi_0x2833c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28394Cu; }
        if (ctx->pc != 0x28394Cu) { return; }
    }
    ctx->pc = 0x28394Cu;
label_28394c:
    // 0x28394c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28394Cu;
    {
        const bool branch_taken_0x28394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28394c) {
            ctx->pc = 0x283968u;
            goto label_283968;
        }
    }
    ctx->pc = 0x283954u;
    // 0x283954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283958: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x283958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x28395c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x28395cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283960: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283960u;
    {
        const bool branch_taken_0x283960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283960) {
            ctx->pc = 0x283980u;
            goto label_283980;
        }
    }
    ctx->pc = 0x283968u;
label_283968:
    // 0x283968: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x283968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28396c:
    // 0x28396c: 0x0  nop
    ctx->pc = 0x28396cu;
    // NOP
    // 0x283970: 0x8e022208  lw          $v0, 0x2208($s0)
    ctx->pc = 0x283970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8712)));
    // 0x283974: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x283974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283978: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x283978u;
    {
        const bool branch_taken_0x283978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28397Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283978u;
            // 0x28397c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283978) {
            ctx->pc = 0x283944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283944;
        }
    }
    ctx->pc = 0x283980u;
label_283980:
    // 0x283980: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283980u;
    {
        const bool branch_taken_0x283980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283980u;
            // 0x283984: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283980) {
            ctx->pc = 0x2839C4u;
            goto label_2839c4;
        }
    }
    ctx->pc = 0x283988u;
label_283988:
    // 0x283988: 0xc0a0cf0  jal         func_2833C0
    ctx->pc = 0x283988u;
    SET_GPR_U32(ctx, 31, 0x283990u);
    ctx->pc = 0x2833C0u;
    if (runtime->hasFunction(0x2833C0u)) {
        auto targetFn = runtime->lookupFunction(0x2833C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283990u; }
        if (ctx->pc != 0x283990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMessage__6CSceneFi_0x2833c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283990u; }
        if (ctx->pc != 0x283990u) { return; }
    }
    ctx->pc = 0x283990u;
label_283990:
    // 0x283990: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283990u;
    {
        const bool branch_taken_0x283990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283990) {
            ctx->pc = 0x2839A0u;
            goto label_2839a0;
        }
    }
    ctx->pc = 0x283998u;
    // 0x283998: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x283998u;
    {
        const bool branch_taken_0x283998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28399Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283998u;
            // 0x28399c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283998) {
            ctx->pc = 0x2839C4u;
            goto label_2839c4;
        }
    }
    ctx->pc = 0x2839A0u;
label_2839a0:
    // 0x2839a0: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2839A0u;
    {
        const bool branch_taken_0x2839a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2839A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2839A0u;
            // 0x2839a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839a0) {
            ctx->pc = 0x2839ACu;
            goto label_2839ac;
        }
    }
    ctx->pc = 0x2839A8u;
    // 0x2839a8: 0x27918400  addiu       $s1, $gp, -0x7C00
    ctx->pc = 0x2839a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935552));
label_2839ac:
    // 0x2839ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2839acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2839b0: 0xc0a0b00  jal         func_282C00
    ctx->pc = 0x2839B0u;
    SET_GPR_U32(ctx, 31, 0x2839B8u);
    ctx->pc = 0x2839B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2839B0u;
            // 0x2839b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282C00u;
    if (runtime->hasFunction(0x282C00u)) {
        auto targetFn = runtime->lookupFunction(0x282C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2839B8u; }
        if (ctx->pc != 0x2839B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignData__13CSceneMessageFP6ClsMesPc_0x282c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2839B8u; }
        if (ctx->pc != 0x2839B8u) { return; }
    }
    ctx->pc = 0x2839B8u;
label_2839b8:
    // 0x2839b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2839B8u;
    {
        const bool branch_taken_0x2839b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2839B8u;
            // 0x2839bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839b8) {
            ctx->pc = 0x2839C4u;
            goto label_2839c4;
        }
    }
    ctx->pc = 0x2839C0u;
    // 0x2839c0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2839c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2839c4:
    // 0x2839c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2839c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2839c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2839c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2839cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2839ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2839d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2839d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2839d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2839d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2839d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2839D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2839DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2839D8u;
            // 0x2839dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2839E0u;
}
