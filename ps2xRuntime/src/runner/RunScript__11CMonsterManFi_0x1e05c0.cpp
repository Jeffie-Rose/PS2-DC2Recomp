#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RunScript__11CMonsterManFi
// Address: 0x1e05c0 - 0x1e0668
void RunScript__11CMonsterManFi_0x1e05c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RunScript__11CMonsterManFi_0x1e05c0");
#endif

    switch (ctx->pc) {
        case 0x1e060cu: goto label_1e060c;
        case 0x1e0624u: goto label_1e0624;
        case 0x1e0644u: goto label_1e0644;
        default: break;
    }

    ctx->pc = 0x1e05c0u;

    // 0x1e05c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e05c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e05c4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e05c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e05c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e05cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e05d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e05d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e05d4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e05d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e05d8: 0xaf848e6c  sw          $a0, -0x7194($gp)
    ctx->pc = 0x1e05d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938220), GPR_U32(ctx, 4));
    // 0x1e05dc: 0x8c630484  lw          $v1, 0x484($v1)
    ctx->pc = 0x1e05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1e05e0: 0xaf838e70  sw          $v1, -0x7190($gp)
    ctx->pc = 0x1e05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938224), GPR_U32(ctx, 3));
    // 0x1e05e4: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e05e8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E05E8u;
    {
        const bool branch_taken_0x1e05e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e05e8) {
            ctx->pc = 0x1E0658u;
            goto label_1e0658;
        }
    }
    ctx->pc = 0x1E05F0u;
    // 0x1e05f0: 0x84701158  lh          $s0, 0x1158($v1)
    ctx->pc = 0x1e05f0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4440)));
    // 0x1e05f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e05f8: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E05F8u;
    {
        const bool branch_taken_0x1e05f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E05FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E05F8u;
            // 0x1e05fc: 0x24641040  addiu       $a0, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05f8) {
            ctx->pc = 0x1E063Cu;
            goto label_1e063c;
        }
    }
    ctx->pc = 0x1E0600u;
    // 0x1e0600: 0x24641040  addiu       $a0, $v1, 0x1040
    ctx->pc = 0x1e0600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
    // 0x1e0604: 0xc061cd8  jal         func_187360
    ctx->pc = 0x1E0604u;
    SET_GPR_U32(ctx, 31, 0x1E060Cu);
    ctx->pc = 0x1E0608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0604u;
            // 0x1e0608: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    if (runtime->hasFunction(0x187360u)) {
        auto targetFn = runtime->lookupFunction(0x187360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E060Cu; }
        if (ctx->pc != 0x1E060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_program__10CRunScriptFi_0x187360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E060Cu; }
        if (ctx->pc != 0x1E060Cu) { return; }
    }
    ctx->pc = 0x1E060Cu;
label_1e060c:
    // 0x1e060c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E060Cu;
    {
        const bool branch_taken_0x1e060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e060c) {
            ctx->pc = 0x1E0658u;
            goto label_1e0658;
        }
    }
    ctx->pc = 0x1E0614u;
    // 0x1e0614: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e0614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e0618: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e0618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e061c: 0xc061c84  jal         func_187210
    ctx->pc = 0x1E061Cu;
    SET_GPR_U32(ctx, 31, 0x1E0624u);
    ctx->pc = 0x1E0620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E061Cu;
            // 0x1e0620: 0x24441040  addiu       $a0, $v0, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187210u;
    if (runtime->hasFunction(0x187210u)) {
        auto targetFn = runtime->lookupFunction(0x187210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0624u; }
        if (ctx->pc != 0x1E0624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        run__10CRunScriptFi_0x187210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0624u; }
        if (ctx->pc != 0x1E0624u) { return; }
    }
    ctx->pc = 0x1E0624u;
label_1e0624:
    // 0x1e0624: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e0624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e0628: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1e0628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e062c: 0xa470115a  sh          $s0, 0x115A($v1)
    ctx->pc = 0x1e062cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4442), (uint16_t)GPR_U32(ctx, 16));
    // 0x1e0630: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e0630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e0634: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0634u;
    {
        const bool branch_taken_0x1e0634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0634u;
            // 0x1e0638: 0xa4641158  sh          $a0, 0x1158($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4440), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0634) {
            ctx->pc = 0x1E0658u;
            goto label_1e0658;
        }
    }
    ctx->pc = 0x1E063Cu;
label_1e063c:
    // 0x1e063c: 0xc061c78  jal         func_1871E0
    ctx->pc = 0x1E063Cu;
    SET_GPR_U32(ctx, 31, 0x1E0644u);
    ctx->pc = 0x1871E0u;
    if (runtime->hasFunction(0x1871E0u)) {
        auto targetFn = runtime->lookupFunction(0x1871E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0644u; }
        if (ctx->pc != 0x1E0644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        resume__10CRunScriptFv_0x1871e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0644u; }
        if (ctx->pc != 0x1E0644u) { return; }
    }
    ctx->pc = 0x1E0644u;
label_1e0644:
    // 0x1e0644: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e0644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e0648: 0x8c83107c  lw          $v1, 0x107C($a0)
    ctx->pc = 0x1e0648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4220)));
    // 0x1e064c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E064Cu;
    {
        const bool branch_taken_0x1e064c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E064Cu;
            // 0x1e0650: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e064c) {
            ctx->pc = 0x1E0658u;
            goto label_1e0658;
        }
    }
    ctx->pc = 0x1E0654u;
    // 0x1e0654: 0xa4831158  sh          $v1, 0x1158($a0)
    ctx->pc = 0x1e0654u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4440), (uint16_t)GPR_U32(ctx, 3));
label_1e0658:
    // 0x1e0658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e065c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e065cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0660: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0660u;
            // 0x1e0664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0668u;
}
