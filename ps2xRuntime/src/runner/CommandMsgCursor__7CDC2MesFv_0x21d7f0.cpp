#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CommandMsgCursor__7CDC2MesFv
// Address: 0x21d7f0 - 0x21d8bc
void CommandMsgCursor__7CDC2MesFv_0x21d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandMsgCursor__7CDC2MesFv_0x21d7f0");
#endif

    switch (ctx->pc) {
        case 0x21d818u: goto label_21d818;
        case 0x21d830u: goto label_21d830;
        case 0x21d844u: goto label_21d844;
        case 0x21d894u: goto label_21d894;
        case 0x21d8a4u: goto label_21d8a4;
        default: break;
    }

    ctx->pc = 0x21d7f0u;

    // 0x21d7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d7f4: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x21d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x21d7f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d7fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d804: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21d804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d80c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x21d80cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x21d810: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x21D810u;
    SET_GPR_U32(ctx, 31, 0x21D818u);
    ctx->pc = 0x21D814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D810u;
            // 0x21d814: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D818u; }
        if (ctx->pc != 0x21D818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D818u; }
        if (ctx->pc != 0x21D818u) { return; }
    }
    ctx->pc = 0x21D818u;
label_21d818:
    // 0x21d818: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D818u;
    {
        const bool branch_taken_0x21d818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D818u;
            // 0x21d81c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d818) {
            ctx->pc = 0x21D824u;
            goto label_21d824;
        }
    }
    ctx->pc = 0x21D820u;
    // 0x21d820: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21d820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21d824:
    // 0x21d824: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x21d824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x21d828: 0xc052d0c  jal         func_14B430
    ctx->pc = 0x21D828u;
    SET_GPR_U32(ctx, 31, 0x21D830u);
    ctx->pc = 0x21D82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D828u;
            // 0x21d82c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D830u; }
        if (ctx->pc != 0x21D830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D830u; }
        if (ctx->pc != 0x21D830u) { return; }
    }
    ctx->pc = 0x21D830u;
label_21d830:
    // 0x21d830: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D830u;
    {
        const bool branch_taken_0x21d830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D830u;
            // 0x21d834: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d830) {
            ctx->pc = 0x21D83Cu;
            goto label_21d83c;
        }
    }
    ctx->pc = 0x21D838u;
    // 0x21d838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21d838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21d83c:
    // 0x21d83c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21d83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d844:
    // 0x21d844: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x21d844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x21d848: 0x8c421a04  lw          $v0, 0x1A04($v0)
    ctx->pc = 0x21d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6660)));
    // 0x21d84c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x21d84cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21d850: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D850u;
    {
        const bool branch_taken_0x21d850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d850) {
            ctx->pc = 0x21D86Cu;
            goto label_21d86c;
        }
    }
    ctx->pc = 0x21D858u;
    // 0x21d858: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21d858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21d85c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21d860: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x21d860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21d864: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21D864u;
    {
        const bool branch_taken_0x21d864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D864u;
            // 0x21d868: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d864) {
            ctx->pc = 0x21D844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21d844;
        }
    }
    ctx->pc = 0x21D86Cu;
label_21d86c:
    // 0x21d86c: 0x0  nop
    ctx->pc = 0x21d86cu;
    // NOP
    // 0x21d870: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D870u;
    {
        const bool branch_taken_0x21d870 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x21D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D870u;
            // 0x21d874: 0x2467ffff  addiu       $a3, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d870) {
            ctx->pc = 0x21D880u;
            goto label_21d880;
        }
    }
    ctx->pc = 0x21D878u;
    // 0x21d878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d87c: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x21d87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21d880:
    // 0x21d880: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d888: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21d888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d88c: 0xc0875e0  jal         func_21D780
    ctx->pc = 0x21D88Cu;
    SET_GPR_U32(ctx, 31, 0x21D894u);
    ctx->pc = 0x21D890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D88Cu;
            // 0x21d890: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D780u;
    if (runtime->hasFunction(0x21D780u)) {
        auto targetFn = runtime->lookupFunction(0x21D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D894u; }
        if (ctx->pc != 0x21D894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor__7CDC2MesFiiii_0x21d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D894u; }
        if (ctx->pc != 0x21D894u) { return; }
    }
    ctx->pc = 0x21D894u;
label_21d894:
    // 0x21d894: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D894u;
    {
        const bool branch_taken_0x21d894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D894u;
            // 0x21d898: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d894) {
            ctx->pc = 0x21D8A4u;
            goto label_21d8a4;
        }
    }
    ctx->pc = 0x21D89Cu;
    // 0x21d89c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21D89Cu;
    SET_GPR_U32(ctx, 31, 0x21D8A4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D8A4u; }
        if (ctx->pc != 0x21D8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D8A4u; }
        if (ctx->pc != 0x21D8A4u) { return; }
    }
    ctx->pc = 0x21D8A4u;
label_21d8a4:
    // 0x21d8a4: 0x820221e1  lb          $v0, 0x21E1($s0)
    ctx->pc = 0x21d8a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8673)));
    // 0x21d8a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d8ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d8acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d8b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x21D8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D8B4u;
            // 0x21d8b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D8BCu;
}
