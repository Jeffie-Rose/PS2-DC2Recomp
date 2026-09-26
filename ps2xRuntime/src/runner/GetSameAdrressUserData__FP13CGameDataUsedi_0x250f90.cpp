#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSameAdrressUserData__FP13CGameDataUsedi
// Address: 0x250f90 - 0x251000
void GetSameAdrressUserData__FP13CGameDataUsedi_0x250f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSameAdrressUserData__FP13CGameDataUsedi_0x250f90");
#endif

    switch (ctx->pc) {
        case 0x250fb8u: goto label_250fb8;
        case 0x250fc4u: goto label_250fc4;
        default: break;
    }

    ctx->pc = 0x250f90u;

    // 0x250f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x250f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x250f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x250f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x250f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x250f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x250fa0: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x250FA0u;
    {
        const bool branch_taken_0x250fa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x250FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250FA0u;
            // 0x250fa4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fa0) {
            ctx->pc = 0x250FE4u;
            goto label_250fe4;
        }
    }
    ctx->pc = 0x250FA8u;
    // 0x250fa8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x250fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x250fac: 0x8c30d8d0  lw          $s0, -0x2730($at)
    ctx->pc = 0x250facu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x250fb0: 0xc068644  jal         func_1A1910
    ctx->pc = 0x250FB0u;
    SET_GPR_U32(ctx, 31, 0x250FB8u);
    ctx->pc = 0x250FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250FB0u;
            // 0x250fb4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250FB8u; }
        if (ctx->pc != 0x250FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250FB8u; }
        if (ctx->pc != 0x250FB8u) { return; }
    }
    ctx->pc = 0x250FB8u;
label_250fb8:
    // 0x250fb8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x250fb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250fbc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x250FBCu;
    {
        const bool branch_taken_0x250fbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x250FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250FBCu;
            // 0x250fc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fbc) {
            ctx->pc = 0x250FE4u;
            goto label_250fe4;
        }
    }
    ctx->pc = 0x250FC4u;
label_250fc4:
    // 0x250fc4: 0x16110003  bne         $s0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x250FC4u;
    {
        const bool branch_taken_0x250fc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x250fc4) {
            ctx->pc = 0x250FD4u;
            goto label_250fd4;
        }
    }
    ctx->pc = 0x250FCCu;
    // 0x250fcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x250FCCu;
    {
        const bool branch_taken_0x250fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250FCCu;
            // 0x250fd0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fcc) {
            ctx->pc = 0x250FECu;
            goto label_250fec;
        }
    }
    ctx->pc = 0x250FD4u;
label_250fd4:
    // 0x250fd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x250fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x250fd8: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x250fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250fdc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x250FDCu;
    {
        const bool branch_taken_0x250fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x250FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250FDCu;
            // 0x250fe0: 0x2610006c  addiu       $s0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fdc) {
            ctx->pc = 0x250FC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250fc4;
        }
    }
    ctx->pc = 0x250FE4u;
label_250fe4:
    // 0x250fe4: 0x0  nop
    ctx->pc = 0x250fe4u;
    // NOP
    // 0x250fe8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x250fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_250fec:
    // 0x250fec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x250fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250ff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x250ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250ff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x250FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250FF8u;
            // 0x250ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251000u;
}
