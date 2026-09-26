#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFootSoundID__10CEohMotherFii
// Address: 0x25f2e0 - 0x25f33c
void SetFootSoundID__10CEohMotherFii_0x25f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFootSoundID__10CEohMotherFii_0x25f2e0");
#endif

    ctx->pc = 0x25f2e0u;

    // 0x25f2e0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F2E0u;
    {
        const bool branch_taken_0x25f2e0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F2E0u;
            // 0x25f2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2e0) {
            ctx->pc = 0x25F2F8u;
            goto label_25f2f8;
        }
    }
    ctx->pc = 0x25F2E8u;
    // 0x25f2e8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25f2ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F2ECu;
    {
        const bool branch_taken_0x25f2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F2ECu;
            // 0x25f2f0: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f2ec) {
            ctx->pc = 0x25F300u;
            goto label_25f300;
        }
    }
    ctx->pc = 0x25F2F4u;
    // 0x25f2f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f2f8:
    // 0x25f2f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25F2F8u;
    {
        const bool branch_taken_0x25f2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f2f8) {
            ctx->pc = 0x25F334u;
            goto label_25f334;
        }
    }
    ctx->pc = 0x25F300u;
label_25f300:
    // 0x25f300: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25f304: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F308u;
    {
        const bool branch_taken_0x25f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f308) {
            ctx->pc = 0x25F318u;
            goto label_25f318;
        }
    }
    ctx->pc = 0x25F310u;
    // 0x25f310: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25F310u;
    {
        const bool branch_taken_0x25f310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F310u;
            // 0x25f314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f310) {
            ctx->pc = 0x25F334u;
            goto label_25f334;
        }
    }
    ctx->pc = 0x25F318u;
label_25f318:
    // 0x25f318: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25f318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25f31c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F31Cu;
    {
        const bool branch_taken_0x25f31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f31c) {
            ctx->pc = 0x25F32Cu;
            goto label_25f32c;
        }
    }
    ctx->pc = 0x25F324u;
    // 0x25f324: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F324u;
    {
        const bool branch_taken_0x25f324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F324u;
            // 0x25f328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f324) {
            ctx->pc = 0x25F334u;
            goto label_25f334;
        }
    }
    ctx->pc = 0x25F32Cu;
label_25f32c:
    // 0x25f32c: 0xac460580  sw          $a2, 0x580($v0)
    ctx->pc = 0x25f32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1408), GPR_U32(ctx, 6));
    // 0x25f330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f334:
    // 0x25f334: 0x3e00008  jr          $ra
    ctx->pc = 0x25F334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F33Cu;
}
