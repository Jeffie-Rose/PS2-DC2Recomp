#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetValue__16CEffectScriptManFifii
// Address: 0x2e27c0 - 0x2e2864
void SetValue__16CEffectScriptManFifii_0x2e27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetValue__16CEffectScriptManFifii_0x2e27c0");
#endif

    ctx->pc = 0x2e27c0u;

    // 0x2e27c0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E27C0u;
    {
        const bool branch_taken_0x2e27c0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2E27C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E27C0u;
            // 0x2e27c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27c0) {
            ctx->pc = 0x2E27D8u;
            goto label_2e27d8;
        }
    }
    ctx->pc = 0x2E27C8u;
    // 0x2e27c8: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2e27c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e27cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E27CCu;
    {
        const bool branch_taken_0x2e27cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e27cc) {
            ctx->pc = 0x2E27E0u;
            goto label_2e27e0;
        }
    }
    ctx->pc = 0x2E27D4u;
    // 0x2e27d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e27d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e27d8:
    // 0x2e27d8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E27D8u;
    {
        const bool branch_taken_0x2e27d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e27d8) {
            ctx->pc = 0x2E285Cu;
            goto label_2e285c;
        }
    }
    ctx->pc = 0x2E27E0u;
label_2e27e0:
    // 0x2e27e0: 0x4e00017  bltz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E27E0u;
    {
        const bool branch_taken_0x2e27e0 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x2e27e0) {
            ctx->pc = 0x2E2840u;
            goto label_2e2840;
        }
    }
    ctx->pc = 0x2E27E8u;
    // 0x2e27e8: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E27E8u;
    {
        const bool branch_taken_0x2e27e8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2E27ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E27E8u;
            // 0x2e27ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27e8) {
            ctx->pc = 0x2E2808u;
            goto label_2e2808;
        }
    }
    ctx->pc = 0x2E27F0u;
    // 0x2e27f0: 0x28c10080  slti        $at, $a2, 0x80
    ctx->pc = 0x2e27f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2e27f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E27F4u;
    {
        const bool branch_taken_0x2e27f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E27F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E27F4u;
            // 0x2e27f8: 0x28e20008  slti        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27f4) {
            ctx->pc = 0x2E2804u;
            goto label_2e2804;
        }
    }
    ctx->pc = 0x2E27FCu;
    // 0x2e27fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E27FCu;
    {
        const bool branch_taken_0x2e27fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E27FCu;
            // 0x2e2800: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e27fc) {
            ctx->pc = 0x2E2810u;
            goto label_2e2810;
        }
    }
    ctx->pc = 0x2E2804u;
label_2e2804:
    // 0x2e2804: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2808:
    // 0x2e2808: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E2808u;
    {
        const bool branch_taken_0x2e2808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2808) {
            ctx->pc = 0x2E285Cu;
            goto label_2e285c;
        }
    }
    ctx->pc = 0x2E2810u;
label_2e2810:
    // 0x2e2810: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2e2810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2e2814: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e2818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e281c: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x2e281cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2e2820: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2820u;
    {
        const bool branch_taken_0x2e2820 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2820u;
            // 0x2e2824: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2820) {
            ctx->pc = 0x2E2830u;
            goto label_2e2830;
        }
    }
    ctx->pc = 0x2E2828u;
    // 0x2e2828: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E2828u;
    {
        const bool branch_taken_0x2e2828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E282Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2828u;
            // 0x2e282c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2828) {
            ctx->pc = 0x2E285Cu;
            goto label_2e285c;
        }
    }
    ctx->pc = 0x2E2830u;
label_2e2830:
    // 0x2e2830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2838: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E2838u;
    {
        const bool branch_taken_0x2e2838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E283Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2838u;
            // 0x2e283c: 0xe46c0114  swc1        $f12, 0x114($v1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2838) {
            ctx->pc = 0x2E285Cu;
            goto label_2e285c;
        }
    }
    ctx->pc = 0x2E2840u;
label_2e2840:
    // 0x2e2840: 0x8c841184  lw          $a0, 0x1184($a0)
    ctx->pc = 0x2e2840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4484)));
    // 0x2e2844: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2844u;
    {
        const bool branch_taken_0x2e2844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E2844u;
            // 0x2e2848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2844) {
            ctx->pc = 0x2E285Cu;
            goto label_2e285c;
        }
    }
    ctx->pc = 0x2E284Cu;
    // 0x2e284c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e284cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e2850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e2850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2854: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e2854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e2858: 0xe46c0114  swc1        $f12, 0x114($v1)
    ctx->pc = 0x2e2858u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
label_2e285c:
    // 0x2e285c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E285Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E2864u;
}
