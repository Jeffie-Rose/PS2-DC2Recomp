#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MONSTER_NUM__FP12RS_STACKDATAi
// Address: 0x1e3160 - 0x1e31b0
void ps2__GET_MONSTER_NUM__FP12RS_STACKDATAi_0x1e3160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MONSTER_NUM__FP12RS_STACKDATAi_0x1e3160");
#endif

    switch (ctx->pc) {
        case 0x1e3190u: goto label_1e3190;
        case 0x1e319cu: goto label_1e319c;
        default: break;
    }

    ctx->pc = 0x1e3160u;

    // 0x1e3160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e316c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3170: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3170u;
    {
        const bool branch_taken_0x1e3170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3170u;
            // 0x1e3174: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3170) {
            ctx->pc = 0x1E3180u;
            goto label_1e3180;
        }
    }
    ctx->pc = 0x1E3178u;
    // 0x1e3178: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E3178u;
    {
        const bool branch_taken_0x1e3178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E317Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3178u;
            // 0x1e317c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3178) {
            ctx->pc = 0x1E31A0u;
            goto label_1e31a0;
        }
    }
    ctx->pc = 0x1E3180u;
label_1e3180:
    // 0x1e3180: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e3180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1e3184: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e3184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e3188: 0xc076dc0  jal         func_1DB700
    ctx->pc = 0x1E3188u;
    SET_GPR_U32(ctx, 31, 0x1E3190u);
    ctx->pc = 0x1E318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3188u;
            // 0x1e318c: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB700u;
    if (runtime->hasFunction(0x1DB700u)) {
        auto targetFn = runtime->lookupFunction(0x1DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3190u; }
        if (ctx->pc != 0x1E3190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterNum__11CMonsterManFf_0x1db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3190u; }
        if (ctx->pc != 0x1E3190u) { return; }
    }
    ctx->pc = 0x1E3190u;
label_1e3190:
    // 0x1e3190: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e3190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3194: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E3194u;
    SET_GPR_U32(ctx, 31, 0x1E319Cu);
    ctx->pc = 0x1E3198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3194u;
            // 0x1e3198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E319Cu; }
        if (ctx->pc != 0x1E319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E319Cu; }
        if (ctx->pc != 0x1E319Cu) { return; }
    }
    ctx->pc = 0x1E319Cu;
label_1e319c:
    // 0x1e319c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e319cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e31a0:
    // 0x1e31a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e31a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e31a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e31a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e31a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E31A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E31ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31A8u;
            // 0x1e31ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E31B0u;
}
