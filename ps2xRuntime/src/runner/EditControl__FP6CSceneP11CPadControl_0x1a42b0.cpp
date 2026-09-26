#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditControl__FP6CSceneP11CPadControl
// Address: 0x1a42b0 - 0x1a4318
void EditControl__FP6CSceneP11CPadControl_0x1a42b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditControl__FP6CSceneP11CPadControl_0x1a42b0");
#endif

    switch (ctx->pc) {
        case 0x1a42d8u: goto label_1a42d8;
        case 0x1a42e8u: goto label_1a42e8;
        case 0x1a4300u: goto label_1a4300;
        default: break;
    }

    ctx->pc = 0x1a42b0u;

    // 0x1a42b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a42b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a42b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a42b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a42b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a42b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a42bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a42bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a42c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a42c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a42c4: 0x8f828b98  lw          $v0, -0x7468($gp)
    ctx->pc = 0x1a42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937496)));
    // 0x1a42c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A42C8u;
    {
        const bool branch_taken_0x1a42c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A42CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42C8u;
            // 0x1a42cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42c8) {
            ctx->pc = 0x1A42E0u;
            goto label_1a42e0;
        }
    }
    ctx->pc = 0x1A42D0u;
    // 0x1a42d0: 0xc069ab0  jal         func_1A6AC0
    ctx->pc = 0x1A42D0u;
    SET_GPR_U32(ctx, 31, 0x1A42D8u);
    ctx->pc = 0x1A6AC0u;
    if (runtime->hasFunction(0x1A6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A6AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42D8u; }
        if (ctx->pc != 0x1A42D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LadderControl__FP6CSceneP11CPadControl_0x1a6ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42D8u; }
        if (ctx->pc != 0x1A42D8u) { return; }
    }
    ctx->pc = 0x1A42D8u;
label_1a42d8:
    // 0x1a42d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A42D8u;
    {
        const bool branch_taken_0x1a42d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A42DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42D8u;
            // 0x1a42dc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42d8) {
            ctx->pc = 0x1A4304u;
            goto label_1a4304;
        }
    }
    ctx->pc = 0x1A42E0u;
label_1a42e0:
    // 0x1a42e0: 0xc0695ec  jal         func_1A57B0
    ctx->pc = 0x1A42E0u;
    SET_GPR_U32(ctx, 31, 0x1A42E8u);
    ctx->pc = 0x1A57B0u;
    if (runtime->hasFunction(0x1A57B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A57B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42E8u; }
        if (ctx->pc != 0x1A42E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CharaControl__FP6CSceneP11CPadControl_0x1a57b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A42E8u; }
        if (ctx->pc != 0x1A42E8u) { return; }
    }
    ctx->pc = 0x1A42E8u;
label_1a42e8:
    // 0x1a42e8: 0x8e222e88  lw          $v0, 0x2E88($s1)
    ctx->pc = 0x1a42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11912)));
    // 0x1a42ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A42ECu;
    {
        const bool branch_taken_0x1a42ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A42F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42ECu;
            // 0x1a42f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42ec) {
            ctx->pc = 0x1A42F8u;
            goto label_1a42f8;
        }
    }
    ctx->pc = 0x1A42F4u;
    // 0x1a42f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a42f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a42f8:
    // 0x1a42f8: 0xc0697f0  jal         func_1A5FC0
    ctx->pc = 0x1A42F8u;
    SET_GPR_U32(ctx, 31, 0x1A4300u);
    ctx->pc = 0x1A42FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A42F8u;
            // 0x1a42fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FC0u;
    if (runtime->hasFunction(0x1A5FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4300u; }
        if (ctx->pc != 0x1A4300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CameraControl__FP6CSceneP11CPadControl_0x1a5fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4300u; }
        if (ctx->pc != 0x1A4300u) { return; }
    }
    ctx->pc = 0x1A4300u;
label_1a4300:
    // 0x1a4300: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a4300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4304:
    // 0x1a4304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a430c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a430cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4310: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4310u;
            // 0x1a4314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4318u;
}
