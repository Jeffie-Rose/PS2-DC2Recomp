#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetVillagerInfo__Fi
// Address: 0x319710 - 0x3197c8
void GetVillagerInfo__Fi_0x319710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetVillagerInfo__Fi_0x319710");
#endif

    switch (ctx->pc) {
        case 0x319744u: goto label_319744;
        default: break;
    }

    ctx->pc = 0x319710u;

    // 0x319710: 0x8f87a33c  lw          $a3, -0x5CC4($gp)
    ctx->pc = 0x319710u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943548)));
    // 0x319714: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x319714u;
    {
        const bool branch_taken_0x319714 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x319718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319714u;
            // 0x319718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319714) {
            ctx->pc = 0x31972Cu;
            goto label_31972c;
        }
    }
    ctx->pc = 0x31971Cu;
    // 0x31971c: 0x8f82a338  lw          $v0, -0x5CC8($gp)
    ctx->pc = 0x31971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943544)));
    // 0x319720: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x319720u;
    {
        const bool branch_taken_0x319720 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x319724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319720u;
            // 0x319724: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319720) {
            ctx->pc = 0x319734u;
            goto label_319734;
        }
    }
    ctx->pc = 0x319728u;
    // 0x319728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x319728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31972c:
    // 0x31972c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x31972Cu;
    {
        const bool branch_taken_0x31972c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31972c) {
            ctx->pc = 0x3197C0u;
            goto label_3197c0;
        }
    }
    ctx->pc = 0x319734u;
label_319734:
    // 0x319734: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x319734u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x319738: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x319738u;
    {
        const bool branch_taken_0x319738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319738u;
            // 0x31973c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319738) {
            ctx->pc = 0x319794u;
            goto label_319794;
        }
    }
    ctx->pc = 0x319740u;
    // 0x319740: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x319740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_319744:
    // 0x319744: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319744u;
    {
        const bool branch_taken_0x319744 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x319748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319744u;
            // 0x319748: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319744) {
            ctx->pc = 0x319754u;
            goto label_319754;
        }
    }
    ctx->pc = 0x31974Cu;
    // 0x31974c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x319750: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x319750u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_319754:
    // 0x319754: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x319754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x319758: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x319758u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x31975c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31975cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x319760: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x319760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x319764: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x319764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x319768: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x319768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31976c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31976Cu;
    {
        const bool branch_taken_0x31976c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31976c) {
            ctx->pc = 0x31977Cu;
            goto label_31977c;
        }
    }
    ctx->pc = 0x319774u;
    // 0x319774: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x319774u;
    {
        const bool branch_taken_0x319774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319774u;
            // 0x319778: 0x24c30001  addiu       $v1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319774) {
            ctx->pc = 0x319784u;
            goto label_319784;
        }
    }
    ctx->pc = 0x31977Cu;
label_31977c:
    // 0x31977c: 0x0  nop
    ctx->pc = 0x31977cu;
    // NOP
    // 0x319780: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x319780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_319784:
    // 0x319784: 0x0  nop
    ctx->pc = 0x319784u;
    // NOP
    // 0x319788: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x319788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31978c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x31978Cu;
    {
        const bool branch_taken_0x31978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31978Cu;
            // 0x319790: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31978c) {
            ctx->pc = 0x319744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_319744;
        }
    }
    ctx->pc = 0x319794u;
label_319794:
    // 0x319794: 0x0  nop
    ctx->pc = 0x319794u;
    // NOP
    // 0x319798: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x319798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31979c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31979cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3197a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3197a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3197a4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3197a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3197a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3197a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3197ac: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3197ACu;
    {
        const bool branch_taken_0x3197ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3197ac) {
            ctx->pc = 0x3197BCu;
            goto label_3197bc;
        }
    }
    ctx->pc = 0x3197B4u;
    // 0x3197b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3197B4u;
    {
        const bool branch_taken_0x3197b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3197b4) {
            ctx->pc = 0x3197C0u;
            goto label_3197c0;
        }
    }
    ctx->pc = 0x3197BCu;
label_3197bc:
    // 0x3197bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3197bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3197c0:
    // 0x3197c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3197C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3197C8u;
}
