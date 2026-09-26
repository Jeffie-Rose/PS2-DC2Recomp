#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: check_se_play__6CSceneFi
// Address: 0x2a77b0 - 0x2a786c
void check_se_play__6CSceneFi_0x2a77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("check_se_play__6CSceneFi_0x2a77b0");
#endif

    switch (ctx->pc) {
        case 0x2a77c8u: goto label_2a77c8;
        case 0x2a7810u: goto label_2a7810;
        default: break;
    }

    ctx->pc = 0x2a77b0u;

    // 0x2a77b0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A77B0u;
    {
        const bool branch_taken_0x2a77b0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2A77B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A77B0u;
            // 0x2a77b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a77b0) {
            ctx->pc = 0x2A77C0u;
            goto label_2a77c0;
        }
    }
    ctx->pc = 0x2A77B8u;
    // 0x2a77b8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2A77B8u;
    {
        const bool branch_taken_0x2a77b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A77BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A77B8u;
            // 0x2a77bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a77b8) {
            ctx->pc = 0x2A7864u;
            goto label_2a7864;
        }
    }
    ctx->pc = 0x2A77C0u;
label_2a77c0:
    // 0x2a77c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a77c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a77c4: 0x3407a020  ori         $a3, $zero, 0xA020
    ctx->pc = 0x2a77c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40992);
label_2a77c8:
    // 0x2a77c8: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x2a77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a77cc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a77ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a77d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a77d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a77d4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A77D4u;
    {
        const bool branch_taken_0x2a77d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a77d4) {
            ctx->pc = 0x2A77F8u;
            goto label_2a77f8;
        }
    }
    ctx->pc = 0x2A77DCu;
    // 0x2a77dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a77e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a77e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a77e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a77e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a77e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a77ec: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2a77ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2a77f0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2A77F0u;
    {
        const bool branch_taken_0x2a77f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A77F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A77F0u;
            // 0x2a77f4: 0xac22a030  sw          $v0, -0x5FD0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942768), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a77f0) {
            ctx->pc = 0x2A7864u;
            goto label_2a7864;
        }
    }
    ctx->pc = 0x2A77F8u;
label_2a77f8:
    // 0x2a77f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a77f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a77fc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2a77fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a7800: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2A7800u;
    {
        const bool branch_taken_0x2a7800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7800u;
            // 0x2a7804: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7800) {
            ctx->pc = 0x2A77C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a77c8;
        }
    }
    ctx->pc = 0x2A7808u;
    // 0x2a7808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a780c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a780cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7810:
    // 0x2a7810: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2a7810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a7814: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7818: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a7818u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a781c: 0x8c22a020  lw          $v0, -0x5FE0($at)
    ctx->pc = 0x2a781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942752)));
    // 0x2a7820: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A7820u;
    {
        const bool branch_taken_0x2a7820 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2A7824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7820u;
            // 0x2a7824: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7820) {
            ctx->pc = 0x2A7850u;
            goto label_2a7850;
        }
    }
    ctx->pc = 0x2A7828u;
    // 0x2a7828: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a782c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2a782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a7830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a7830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7834: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a7834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a7838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a783c: 0xac25a020  sw          $a1, -0x5FE0($at)
    ctx->pc = 0x2a783cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942752), GPR_U32(ctx, 5));
    // 0x2a7840: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7844: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a7844u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a7848: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7848u;
    {
        const bool branch_taken_0x2a7848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A784Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7848u;
            // 0x2a784c: 0xac23a030  sw          $v1, -0x5FD0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294942768), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7848) {
            ctx->pc = 0x2A7864u;
            goto label_2a7864;
        }
    }
    ctx->pc = 0x2A7850u;
label_2a7850:
    // 0x2a7850: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a7850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a7854: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2a7854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a7858: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A7858u;
    {
        const bool branch_taken_0x2a7858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A785Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7858u;
            // 0x2a785c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7858) {
            ctx->pc = 0x2A7810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7810;
        }
    }
    ctx->pc = 0x2A7860u;
    // 0x2a7860: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a7860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a7864:
    // 0x2a7864: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A786Cu;
}
