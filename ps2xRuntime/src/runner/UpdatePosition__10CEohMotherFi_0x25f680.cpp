#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdatePosition__10CEohMotherFi
// Address: 0x25f680 - 0x25f6e8
void UpdatePosition__10CEohMotherFi_0x25f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdatePosition__10CEohMotherFi_0x25f680");
#endif

    switch (ctx->pc) {
        case 0x25f6d4u: goto label_25f6d4;
        default: break;
    }

    ctx->pc = 0x25f680u;

    // 0x25f680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25f684: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F684u;
    {
        const bool branch_taken_0x25f684 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F684u;
            // 0x25f688: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f684) {
            ctx->pc = 0x25F698u;
            goto label_25f698;
        }
    }
    ctx->pc = 0x25F68Cu;
    // 0x25f68c: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25f690: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F690u;
    {
        const bool branch_taken_0x25f690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F690u;
            // 0x25f694: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f690) {
            ctx->pc = 0x25F6A0u;
            goto label_25f6a0;
        }
    }
    ctx->pc = 0x25F698u;
label_25f698:
    // 0x25f698: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25F698u;
    {
        const bool branch_taken_0x25f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F698u;
            // 0x25f69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f698) {
            ctx->pc = 0x25F6DCu;
            goto label_25f6dc;
        }
    }
    ctx->pc = 0x25F6A0u;
label_25f6a0:
    // 0x25f6a0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25f6a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f6a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F6A8u;
    {
        const bool branch_taken_0x25f6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f6a8) {
            ctx->pc = 0x25F6B8u;
            goto label_25f6b8;
        }
    }
    ctx->pc = 0x25F6B0u;
    // 0x25f6b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25F6B0u;
    {
        const bool branch_taken_0x25f6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F6B0u;
            // 0x25f6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6b0) {
            ctx->pc = 0x25F6DCu;
            goto label_25f6dc;
        }
    }
    ctx->pc = 0x25F6B8u;
label_25f6b8:
    // 0x25f6b8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x25f6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25f6bc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F6BCu;
    {
        const bool branch_taken_0x25f6bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F6BCu;
            // 0x25f6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6bc) {
            ctx->pc = 0x25F6CCu;
            goto label_25f6cc;
        }
    }
    ctx->pc = 0x25F6C4u;
    // 0x25f6c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25F6C4u;
    {
        const bool branch_taken_0x25f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F6C4u;
            // 0x25f6c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6c4) {
            ctx->pc = 0x25F6E0u;
            goto label_25f6e0;
        }
    }
    ctx->pc = 0x25F6CCu;
label_25f6cc:
    // 0x25f6cc: 0xc05cdc0  jal         func_173700
    ctx->pc = 0x25F6CCu;
    SET_GPR_U32(ctx, 31, 0x25F6D4u);
    ctx->pc = 0x173700u;
    if (runtime->hasFunction(0x173700u)) {
        auto targetFn = runtime->lookupFunction(0x173700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F6D4u; }
        if (ctx->pc != 0x25F6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdatePosition__11CCharacter2Fv_0x173700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F6D4u; }
        if (ctx->pc != 0x25F6D4u) { return; }
    }
    ctx->pc = 0x25F6D4u;
label_25f6d4:
    // 0x25f6d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x25F6D4u;
    {
        const bool branch_taken_0x25f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F6D4u;
            // 0x25f6d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6d4) {
            ctx->pc = 0x25F6DCu;
            goto label_25f6dc;
        }
    }
    ctx->pc = 0x25F6DCu;
label_25f6dc:
    // 0x25f6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f6e0:
    // 0x25f6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25F6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F6E0u;
            // 0x25f6e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F6E8u;
}
