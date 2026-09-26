#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSoundID__10CEohMotherFiUi
// Address: 0x25f3f0 - 0x25f44c
void SetSoundID__10CEohMotherFiUi_0x25f3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSoundID__10CEohMotherFiUi_0x25f3f0");
#endif

    ctx->pc = 0x25f3f0u;

    // 0x25f3f0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25F3F0u;
    {
        const bool branch_taken_0x25f3f0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25F3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3F0u;
            // 0x25f3f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3f0) {
            ctx->pc = 0x25F408u;
            goto label_25f408;
        }
    }
    ctx->pc = 0x25F3F8u;
    // 0x25f3f8: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25f3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25f3fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25F3FCu;
    {
        const bool branch_taken_0x25f3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F3FCu;
            // 0x25f400: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f3fc) {
            ctx->pc = 0x25F410u;
            goto label_25f410;
        }
    }
    ctx->pc = 0x25F404u;
    // 0x25f404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25f404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f408:
    // 0x25f408: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25F408u;
    {
        const bool branch_taken_0x25f408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f408) {
            ctx->pc = 0x25F444u;
            goto label_25f444;
        }
    }
    ctx->pc = 0x25F410u;
label_25f410:
    // 0x25f410: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x25f410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25f414: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25f414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25f418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F418u;
    {
        const bool branch_taken_0x25f418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f418) {
            ctx->pc = 0x25F428u;
            goto label_25f428;
        }
    }
    ctx->pc = 0x25F420u;
    // 0x25f420: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25F420u;
    {
        const bool branch_taken_0x25f420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F420u;
            // 0x25f424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f420) {
            ctx->pc = 0x25F444u;
            goto label_25f444;
        }
    }
    ctx->pc = 0x25F428u;
label_25f428:
    // 0x25f428: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x25f428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x25f42c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25F42Cu;
    {
        const bool branch_taken_0x25f42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f42c) {
            ctx->pc = 0x25F43Cu;
            goto label_25f43c;
        }
    }
    ctx->pc = 0x25F434u;
    // 0x25f434: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25F434u;
    {
        const bool branch_taken_0x25f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F434u;
            // 0x25f438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f434) {
            ctx->pc = 0x25F444u;
            goto label_25f444;
        }
    }
    ctx->pc = 0x25F43Cu;
label_25f43c:
    // 0x25f43c: 0xac460588  sw          $a2, 0x588($v0)
    ctx->pc = 0x25f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1416), GPR_U32(ctx, 6));
    // 0x25f440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25f444:
    // 0x25f444: 0x3e00008  jr          $ra
    ctx->pc = 0x25F444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F44Cu;
}
