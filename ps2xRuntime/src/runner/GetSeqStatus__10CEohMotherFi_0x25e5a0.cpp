#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSeqStatus__10CEohMotherFi
// Address: 0x25e5a0 - 0x25e60c
void GetSeqStatus__10CEohMotherFi_0x25e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSeqStatus__10CEohMotherFi_0x25e5a0");
#endif

    ctx->pc = 0x25e5a0u;

    // 0x25e5a0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E5A0u;
    {
        const bool branch_taken_0x25e5a0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E5A0u;
            // 0x25e5a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5a0) {
            ctx->pc = 0x25E5B8u;
            goto label_25e5b8;
        }
    }
    ctx->pc = 0x25E5A8u;
    // 0x25e5a8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e5a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25e5ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E5ACu;
    {
        const bool branch_taken_0x25e5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E5ACu;
            // 0x25e5b0: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5ac) {
            ctx->pc = 0x25E5C0u;
            goto label_25e5c0;
        }
    }
    ctx->pc = 0x25E5B4u;
    // 0x25e5b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25e5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25e5b8:
    // 0x25e5b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25E5B8u;
    {
        const bool branch_taken_0x25e5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e5b8) {
            ctx->pc = 0x25E604u;
            goto label_25e604;
        }
    }
    ctx->pc = 0x25E5C0u;
label_25e5c0:
    // 0x25e5c0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25e5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25e5c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e5c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E5C8u;
    {
        const bool branch_taken_0x25e5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e5c8) {
            ctx->pc = 0x25E5D8u;
            goto label_25e5d8;
        }
    }
    ctx->pc = 0x25E5D0u;
    // 0x25e5d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25E5D0u;
    {
        const bool branch_taken_0x25e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E5D0u;
            // 0x25e5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5d0) {
            ctx->pc = 0x25E604u;
            goto label_25e604;
        }
    }
    ctx->pc = 0x25E5D8u;
label_25e5d8:
    // 0x25e5d8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25e5dc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E5DCu;
    {
        const bool branch_taken_0x25e5dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E5DCu;
            // 0x25e5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5dc) {
            ctx->pc = 0x25E5ECu;
            goto label_25e5ec;
        }
    }
    ctx->pc = 0x25E5E4u;
    // 0x25e5e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25E5E4u;
    {
        const bool branch_taken_0x25e5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e5e4) {
            ctx->pc = 0x25E604u;
            goto label_25e604;
        }
    }
    ctx->pc = 0x25E5ECu;
label_25e5ec:
    // 0x25e5ec: 0x8c830378  lw          $v1, 0x378($a0)
    ctx->pc = 0x25e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 888)));
    // 0x25e5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e5f4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E5F4u;
    {
        const bool branch_taken_0x25e5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25E5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E5F4u;
            // 0x25e5f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5f4) {
            ctx->pc = 0x25E604u;
            goto label_25e604;
        }
    }
    ctx->pc = 0x25E5FCu;
    // 0x25e5fc: 0x8c8203b8  lw          $v0, 0x3B8($a0)
    ctx->pc = 0x25e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 952)));
    // 0x25e600: 0x0  nop
    ctx->pc = 0x25e600u;
    // NOP
label_25e604:
    // 0x25e604: 0x3e00008  jr          $ra
    ctx->pc = 0x25E604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25E60Cu;
}
