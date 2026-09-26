#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMesTxt__Fi
// Address: 0x30e4c0 - 0x30e518
void GetMesTxt__Fi_0x30e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMesTxt__Fi_0x30e4c0");
#endif

    ctx->pc = 0x30e4c0u;

    // 0x30e4c0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E4C0u;
    {
        const bool branch_taken_0x30e4c0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x30E4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4C0u;
            // 0x30e4c4: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4c0) {
            ctx->pc = 0x30E4D0u;
            goto label_30e4d0;
        }
    }
    ctx->pc = 0x30E4C8u;
    // 0x30e4c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E4C8u;
    {
        const bool branch_taken_0x30e4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e4c8) {
            ctx->pc = 0x30E4D8u;
            goto label_30e4d8;
        }
    }
    ctx->pc = 0x30E4D0u;
label_30e4d0:
    // 0x30e4d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30E4D0u;
    {
        const bool branch_taken_0x30e4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4D0u;
            // 0x30e4d4: 0x8f828640  lw          $v0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4d0) {
            ctx->pc = 0x30E510u;
            goto label_30e510;
        }
    }
    ctx->pc = 0x30E4D8u;
label_30e4d8:
    // 0x30e4d8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x30e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30e4dc: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E4DCu;
    {
        const bool branch_taken_0x30e4dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x30E4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4DCu;
            // 0x30e4e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4dc) {
            ctx->pc = 0x30E4ECu;
            goto label_30e4ec;
        }
    }
    ctx->pc = 0x30E4E4u;
    // 0x30e4e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E4E4u;
    {
        const bool branch_taken_0x30e4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4E4u;
            // 0x30e4e8: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4e4) {
            ctx->pc = 0x30E4F4u;
            goto label_30e4f4;
        }
    }
    ctx->pc = 0x30E4ECu;
label_30e4ec:
    // 0x30e4ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E4ECu;
    {
        const bool branch_taken_0x30e4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E4ECu;
            // 0x30e4f0: 0x8f828640  lw          $v0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e4ec) {
            ctx->pc = 0x30E510u;
            goto label_30e510;
        }
    }
    ctx->pc = 0x30E4F4u;
label_30e4f4:
    // 0x30e4f4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x30e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30e4f8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30e4fc: 0x2463e6a0  addiu       $v1, $v1, -0x1960
    ctx->pc = 0x30e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960800));
    // 0x30e500: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30e504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30e504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30e508: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x30e508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30e50c: 0x0  nop
    ctx->pc = 0x30e50cu;
    // NOP
label_30e510:
    // 0x30e510: 0x3e00008  jr          $ra
    ctx->pc = 0x30E510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E518u;
}
