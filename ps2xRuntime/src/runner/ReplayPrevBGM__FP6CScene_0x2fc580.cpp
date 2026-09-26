#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ReplayPrevBGM__FP6CScene
// Address: 0x2fc580 - 0x2fc604
void ReplayPrevBGM__FP6CScene_0x2fc580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReplayPrevBGM__FP6CScene_0x2fc580");
#endif

    switch (ctx->pc) {
        case 0x2fc5a4u: goto label_2fc5a4;
        case 0x2fc5ccu: goto label_2fc5cc;
        case 0x2fc5d4u: goto label_2fc5d4;
        case 0x2fc5e4u: goto label_2fc5e4;
        case 0x2fc5f4u: goto label_2fc5f4;
        default: break;
    }

    ctx->pc = 0x2fc580u;

    // 0x2fc580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fc588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fc58c: 0x8f82a068  lw          $v0, -0x5F98($gp)
    ctx->pc = 0x2fc58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942824)));
    // 0x2fc590: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC590u;
    {
        const bool branch_taken_0x2fc590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC590u;
            // 0x2fc594: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc590) {
            ctx->pc = 0x2FC5ACu;
            goto label_2fc5ac;
        }
    }
    ctx->pc = 0x2FC598u;
    // 0x2fc598: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2fc598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2fc59c: 0xc0a9960  jal         func_2A6580
    ctx->pc = 0x2FC59Cu;
    SET_GPR_U32(ctx, 31, 0x2FC5A4u);
    ctx->pc = 0x2FC5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC59Cu;
            // 0x2fc5a0: 0x24a59df0  addiu       $a1, $a1, -0x6210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6580u;
    if (runtime->hasFunction(0x2A6580u)) {
        auto targetFn = runtime->lookupFunction(0x2A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5A4u; }
        if (ctx->pc != 0x2FC5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5A4u; }
        if (ctx->pc != 0x2FC5A4u) { return; }
    }
    ctx->pc = 0x2FC5A4u;
label_2fc5a4:
    // 0x2fc5a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FC5A4u;
    {
        const bool branch_taken_0x2fc5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC5A4u;
            // 0x2fc5a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc5a4) {
            ctx->pc = 0x2FC5F8u;
            goto label_2fc5f8;
        }
    }
    ctx->pc = 0x2FC5ACu;
label_2fc5ac:
    // 0x2fc5ac: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fc5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2fc5b0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2fc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2fc5b4: 0x8c259df4  lw          $a1, -0x620C($at)
    ctx->pc = 0x2fc5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942196)));
    // 0x2fc5b8: 0x3c010010  lui         $at, 0x10
    ctx->pc = 0x2fc5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16 << 16));
    // 0x2fc5bc: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC5BCu;
    {
        const bool branch_taken_0x2fc5bc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2FC5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC5BCu;
            // 0x2fc5c0: 0x413021  addu        $a2, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc5bc) {
            ctx->pc = 0x2FC5DCu;
            goto label_2fc5dc;
        }
    }
    ctx->pc = 0x2FC5C4u;
    // 0x2fc5c4: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x2FC5C4u;
    SET_GPR_U32(ctx, 31, 0x2FC5CCu);
    ctx->pc = 0x2FC5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC5C4u;
            // 0x2fc5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5CCu; }
        if (ctx->pc != 0x2FC5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5CCu; }
        if (ctx->pc != 0x2FC5CCu) { return; }
    }
    ctx->pc = 0x2FC5CCu;
label_2fc5cc:
    // 0x2fc5cc: 0xc0a9700  jal         func_2A5C00
    ctx->pc = 0x2FC5CCu;
    SET_GPR_U32(ctx, 31, 0x2FC5D4u);
    ctx->pc = 0x2FC5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC5CCu;
            // 0x2fc5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5C00u;
    if (runtime->hasFunction(0x2A5C00u)) {
        auto targetFn = runtime->lookupFunction(0x2A5C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5D4u; }
        if (ctx->pc != 0x2FC5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitBGM__6CSceneFv_0x2a5c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5D4u; }
        if (ctx->pc != 0x2FC5D4u) { return; }
    }
    ctx->pc = 0x2FC5D4u;
label_2fc5d4:
    // 0x2fc5d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC5D4u;
    {
        const bool branch_taken_0x2fc5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc5d4) {
            ctx->pc = 0x2FC5F4u;
            goto label_2fc5f4;
        }
    }
    ctx->pc = 0x2FC5DCu;
label_2fc5dc:
    // 0x2fc5dc: 0xc0a9be4  jal         func_2A6F90
    ctx->pc = 0x2FC5DCu;
    SET_GPR_U32(ctx, 31, 0x2FC5E4u);
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5E4u; }
        if (ctx->pc != 0x2FC5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5E4u; }
        if (ctx->pc != 0x2FC5E4u) { return; }
    }
    ctx->pc = 0x2FC5E4u;
label_2fc5e4:
    // 0x2fc5e4: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2fc5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2fc5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc5ec: 0xc0a9960  jal         func_2A6580
    ctx->pc = 0x2FC5ECu;
    SET_GPR_U32(ctx, 31, 0x2FC5F4u);
    ctx->pc = 0x2FC5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC5ECu;
            // 0x2fc5f0: 0x24a59df0  addiu       $a1, $a1, -0x6210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6580u;
    if (runtime->hasFunction(0x2A6580u)) {
        auto targetFn = runtime->lookupFunction(0x2A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5F4u; }
        if (ctx->pc != 0x2FC5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC5F4u; }
        if (ctx->pc != 0x2FC5F4u) { return; }
    }
    ctx->pc = 0x2FC5F4u;
label_2fc5f4:
    // 0x2fc5f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc5f8:
    // 0x2fc5f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fc5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC5FCu;
            // 0x2fc600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC604u;
}
