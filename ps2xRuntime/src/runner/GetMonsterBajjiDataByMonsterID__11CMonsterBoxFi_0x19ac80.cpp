#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMonsterBajjiDataByMonsterID__11CMonsterBoxFi
// Address: 0x19ac80 - 0x19acb8
void GetMonsterBajjiDataByMonsterID__11CMonsterBoxFi_0x19ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMonsterBajjiDataByMonsterID__11CMonsterBoxFi_0x19ac80");
#endif

    switch (ctx->pc) {
        case 0x19ac9cu: goto label_19ac9c;
        case 0x19aca8u: goto label_19aca8;
        default: break;
    }

    ctx->pc = 0x19ac80u;

    // 0x19ac80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ac84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ac84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ac88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ac88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ac8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ac8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19ac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac94: 0xc0ad6d0  jal         func_2B5B40
    ctx->pc = 0x19AC94u;
    SET_GPR_U32(ctx, 31, 0x19AC9Cu);
    ctx->pc = 0x19AC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AC94u;
            // 0x19ac98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B40u;
    if (runtime->hasFunction(0x2B5B40u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC9Cu; }
        if (ctx->pc != 0x19AC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get_gajji_id_from_monster_progress_table__FiPi_0x2b5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AC9Cu; }
        if (ctx->pc != 0x19AC9Cu) { return; }
    }
    ctx->pc = 0x19AC9Cu;
label_19ac9c:
    // 0x19ac9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aca0: 0xc066b10  jal         func_19AC40
    ctx->pc = 0x19ACA0u;
    SET_GPR_U32(ctx, 31, 0x19ACA8u);
    ctx->pc = 0x19ACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACA0u;
            // 0x19aca4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AC40u;
    if (runtime->hasFunction(0x19AC40u)) {
        auto targetFn = runtime->lookupFunction(0x19AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACA8u; }
        if (ctx->pc != 0x19ACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiData__11CMonsterBoxFi_0x19ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACA8u; }
        if (ctx->pc != 0x19ACA8u) { return; }
    }
    ctx->pc = 0x19ACA8u;
label_19aca8:
    // 0x19aca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19aca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19acac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19acacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19acb0: 0x3e00008  jr          $ra
    ctx->pc = 0x19ACB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ACB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACB0u;
            // 0x19acb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ACB8u;
}
