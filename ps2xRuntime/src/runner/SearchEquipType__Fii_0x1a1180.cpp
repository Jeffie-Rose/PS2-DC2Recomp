#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchEquipType__Fii
// Address: 0x1a1180 - 0x1a11f0
void SearchEquipType__Fii_0x1a1180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchEquipType__Fii_0x1a1180");
#endif

    ctx->pc = 0x1a1180u;

    // 0x1a1180: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1180u;
    {
        const bool branch_taken_0x1a1180 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A1184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1180u;
            // 0x1a1184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1180) {
            ctx->pc = 0x1A1194u;
            goto label_1a1194;
        }
    }
    ctx->pc = 0x1A1188u;
    // 0x1a1188: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x1a1188u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a118c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A118Cu;
    {
        const bool branch_taken_0x1a118c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a118c) {
            ctx->pc = 0x1A119Cu;
            goto label_1a119c;
        }
    }
    ctx->pc = 0x1A1194u;
label_1a1194:
    // 0x1a1194: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A1194u;
    {
        const bool branch_taken_0x1a1194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1194) {
            ctx->pc = 0x1A11E8u;
            goto label_1a11e8;
        }
    }
    ctx->pc = 0x1A119Cu;
label_1a119c:
    // 0x1a119c: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A119Cu;
    {
        const bool branch_taken_0x1a119c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A11A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A119Cu;
            // 0x1a11a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a119c) {
            ctx->pc = 0x1A11C4u;
            goto label_1a11c4;
        }
    }
    ctx->pc = 0x1A11A4u;
    // 0x1a11a4: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x1a11a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a11a8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A11A8u;
    {
        const bool branch_taken_0x1a11a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11a8) {
            ctx->pc = 0x1A11C0u;
            goto label_1a11c0;
        }
    }
    ctx->pc = 0x1A11B0u;
    // 0x1a11b0: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A11B0u;
    {
        const bool branch_taken_0x1a11b0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1A11B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11B0u;
            // 0x1a11b4: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11b0) {
            ctx->pc = 0x1A11C0u;
            goto label_1a11c0;
        }
    }
    ctx->pc = 0x1A11B8u;
    // 0x1a11b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A11B8u;
    {
        const bool branch_taken_0x1a11b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A11BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A11B8u;
            // 0x1a11bc: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a11b8) {
            ctx->pc = 0x1A11CCu;
            goto label_1a11cc;
        }
    }
    ctx->pc = 0x1A11C0u;
label_1a11c0:
    // 0x1a11c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a11c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a11c4:
    // 0x1a11c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A11C4u;
    {
        const bool branch_taken_0x1a11c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11c4) {
            ctx->pc = 0x1A11E8u;
            goto label_1a11e8;
        }
    }
    ctx->pc = 0x1A11CCu;
label_1a11cc:
    // 0x1a11cc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a11d0: 0x24426398  addiu       $v0, $v0, 0x6398
    ctx->pc = 0x1a11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25496));
    // 0x1a11d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a11d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a11dc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1a11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a11e0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1a11e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a11e4: 0x0  nop
    ctx->pc = 0x1a11e4u;
    // NOP
label_1a11e8:
    // 0x1a11e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A11E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A11F0u;
}
