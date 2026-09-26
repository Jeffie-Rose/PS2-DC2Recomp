#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_FCAMERA_DIST__FP12RS_STACKDATAi
// Address: 0x269140 - 0x269194
void ps2__GET_FCAMERA_DIST__FP12RS_STACKDATAi_0x269140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_FCAMERA_DIST__FP12RS_STACKDATAi_0x269140");
#endif

    switch (ctx->pc) {
        case 0x26915cu: goto label_26915c;
        case 0x269174u: goto label_269174;
        case 0x269180u: goto label_269180;
        default: break;
    }

    ctx->pc = 0x269140u;

    // 0x269140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26914c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26914cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269150: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x269150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x269154: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x269154u;
    SET_GPR_U32(ctx, 31, 0x26915Cu);
    ctx->pc = 0x269158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269154u;
            // 0x269158: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26915Cu; }
        if (ctx->pc != 0x26915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26915Cu; }
        if (ctx->pc != 0x26915Cu) { return; }
    }
    ctx->pc = 0x26915Cu;
label_26915c:
    // 0x26915c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26915Cu;
    {
        const bool branch_taken_0x26915c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26915Cu;
            // 0x269160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26915c) {
            ctx->pc = 0x26916Cu;
            goto label_26916c;
        }
    }
    ctx->pc = 0x269164u;
    // 0x269164: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x269164u;
    {
        const bool branch_taken_0x269164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269164u;
            // 0x269168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269164) {
            ctx->pc = 0x269184u;
            goto label_269184;
        }
    }
    ctx->pc = 0x26916Cu;
label_26916c:
    // 0x26916c: 0xc04c684  jal         func_131A10
    ctx->pc = 0x26916Cu;
    SET_GPR_U32(ctx, 31, 0x269174u);
    ctx->pc = 0x131A10u;
    if (runtime->hasFunction(0x131A10u)) {
        auto targetFn = runtime->lookupFunction(0x131A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269174u; }
        if (ctx->pc != 0x269174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDistance__15mgCCameraFollowFv_0x131a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269174u; }
        if (ctx->pc != 0x269174u) { return; }
    }
    ctx->pc = 0x269174u;
label_269174:
    // 0x269174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269178: 0xc097e54  jal         func_25F950
    ctx->pc = 0x269178u;
    SET_GPR_U32(ctx, 31, 0x269180u);
    ctx->pc = 0x26917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269178u;
            // 0x26917c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269180u; }
        if (ctx->pc != 0x269180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269180u; }
        if (ctx->pc != 0x269180u) { return; }
    }
    ctx->pc = 0x269180u;
label_269180:
    // 0x269180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_269184:
    // 0x269184: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x269184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26918c: 0x3e00008  jr          $ra
    ctx->pc = 0x26918Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26918Cu;
            // 0x269190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x269194u;
}
