#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_CREATE__FP12RS_STACKDATAi
// Address: 0x1e6620 - 0x1e66c8
void ps2__ESM_CREATE__FP12RS_STACKDATAi_0x1e6620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_CREATE__FP12RS_STACKDATAi_0x1e6620");
#endif

    switch (ctx->pc) {
        case 0x1e6634u: goto label_1e6634;
        case 0x1e6670u: goto label_1e6670;
        case 0x1e6694u: goto label_1e6694;
        case 0x1e66b4u: goto label_1e66b4;
        default: break;
    }

    ctx->pc = 0x1e6620u;

    // 0x1e6620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e6624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e6628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e662c: 0xc0781b8  jal         func_1E06E0
    ctx->pc = 0x1E662Cu;
    SET_GPR_U32(ctx, 31, 0x1E6634u);
    ctx->pc = 0x1E6630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E662Cu;
            // 0x1e6630: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6634u; }
        if (ctx->pc != 0x1E6634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6634u; }
        if (ctx->pc != 0x1E6634u) { return; }
    }
    ctx->pc = 0x1E6634u;
label_1e6634:
    // 0x1e6634: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e6634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6638: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e6638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e663c: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E663Cu;
    {
        const bool branch_taken_0x1e663c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E6640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E663Cu;
            // 0x1e6640: 0x8c860670  lw          $a2, 0x670($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e663c) {
            ctx->pc = 0x1E6678u;
            goto label_1e6678;
        }
    }
    ctx->pc = 0x1E6644u;
    // 0x1e6644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e6644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6648: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6648u;
    {
        const bool branch_taken_0x1e6648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6648u;
            // 0x1e664c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6648) {
            ctx->pc = 0x1E6658u;
            goto label_1e6658;
        }
    }
    ctx->pc = 0x1E6650u;
    // 0x1e6650: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E6650u;
    {
        const bool branch_taken_0x1e6650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6650u;
            // 0x1e6654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6650) {
            ctx->pc = 0x1E66B8u;
            goto label_1e66b8;
        }
    }
    ctx->pc = 0x1E6658u;
label_1e6658:
    // 0x1e6658: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e6658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e665c: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e6660: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e6660u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e6664: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e6664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e6668: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x1E6668u;
    SET_GPR_U32(ctx, 31, 0x1E6670u);
    ctx->pc = 0x1E666Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6668u;
            // 0x1e666c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6670u; }
        if (ctx->pc != 0x1E6670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6670u; }
        if (ctx->pc != 0x1E6670u) { return; }
    }
    ctx->pc = 0x1E6670u;
label_1e6670:
    // 0x1e6670: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E6670u;
    {
        const bool branch_taken_0x1e6670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6670) {
            ctx->pc = 0x1E66B4u;
            goto label_1e66b4;
        }
    }
    ctx->pc = 0x1E6678u;
label_1e6678:
    // 0x1e6678: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e6678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e667c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e667cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e6680: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6684: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1e6684u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x1e6688: 0x8c24fff0  lw          $a0, -0x10($at)
    ctx->pc = 0x1e6688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967280)));
    // 0x1e668c: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x1E668Cu;
    SET_GPR_U32(ctx, 31, 0x1E6694u);
    ctx->pc = 0x1E6690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E668Cu;
            // 0x1e6690: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6694u; }
        if (ctx->pc != 0x1E6694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6694u; }
        if (ctx->pc != 0x1E6694u) { return; }
    }
    ctx->pc = 0x1E6694u;
label_1e6694:
    // 0x1e6694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e6694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6698: 0x28a10000  slti        $at, $a1, 0x0
    ctx->pc = 0x1e6698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e669c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E669Cu;
    {
        const bool branch_taken_0x1e669c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E669Cu;
            // 0x1e66a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e669c) {
            ctx->pc = 0x1E66ACu;
            goto label_1e66ac;
        }
    }
    ctx->pc = 0x1E66A4u;
    // 0x1e66a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E66A4u;
    {
        const bool branch_taken_0x1e66a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E66A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66A4u;
            // 0x1e66a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e66a4) {
            ctx->pc = 0x1E66B8u;
            goto label_1e66b8;
        }
    }
    ctx->pc = 0x1E66ACu;
label_1e66ac:
    // 0x1e66ac: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E66ACu;
    SET_GPR_U32(ctx, 31, 0x1E66B4u);
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66B4u; }
        if (ctx->pc != 0x1E66B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66B4u; }
        if (ctx->pc != 0x1E66B4u) { return; }
    }
    ctx->pc = 0x1E66B4u;
label_1e66b4:
    // 0x1e66b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e66b8:
    // 0x1e66b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e66b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e66bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e66bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e66c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E66C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E66C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66C0u;
            // 0x1e66c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E66C8u;
}
