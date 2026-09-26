#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: OmakeSfidaSelect__Fi
// Address: 0x2ae300 - 0x2ae348
void OmakeSfidaSelect__Fi_0x2ae300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OmakeSfidaSelect__Fi_0x2ae300");
#endif

    switch (ctx->pc) {
        case 0x2ae314u: goto label_2ae314;
        case 0x2ae320u: goto label_2ae320;
        default: break;
    }

    ctx->pc = 0x2ae300u;

    // 0x2ae300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae304: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ae304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ae308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ae308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ae30c: 0xc08edcc  jal         func_23B730
    ctx->pc = 0x2AE30Cu;
    SET_GPR_U32(ctx, 31, 0x2AE314u);
    ctx->pc = 0x2AE310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE30Cu;
            // 0x2ae310: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B730u;
    if (runtime->hasFunction(0x23B730u)) {
        auto targetFn = runtime->lookupFunction(0x23B730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE314u; }
        if (ctx->pc != 0x2AE314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuListSelectKeyCheck__Fii_0x23b730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE314u; }
        if (ctx->pc != 0x2AE314u) { return; }
    }
    ctx->pc = 0x2AE314u;
label_2ae314:
    // 0x2ae314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ae314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae318: 0xc048fb2  jal         func_123EC8
    ctx->pc = 0x2AE318u;
    SET_GPR_U32(ctx, 31, 0x2AE320u);
    ctx->pc = 0x2AE31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE318u;
            // 0x2ae31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EC8u;
    if (runtime->hasFunction(0x123EC8u)) {
        auto targetFn = runtime->lookupFunction(0x123EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE320u; }
        if (ctx->pc != 0x2AE320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x123ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE320u; }
        if (ctx->pc != 0x2AE320u) { return; }
    }
    ctx->pc = 0x2AE320u;
label_2ae320:
    // 0x2ae320: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x2ae320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ae324: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE324u;
    {
        const bool branch_taken_0x2ae324 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE324u;
            // 0x2ae328: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae324) {
            ctx->pc = 0x2AE338u;
            goto label_2ae338;
        }
    }
    ctx->pc = 0x2AE32Cu;
    // 0x2ae32c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae330: 0xa3829b58  sb          $v0, -0x64A8($gp)
    ctx->pc = 0x2ae330u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941528), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ae334: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ae334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ae338:
    // 0x2ae338: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ae338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae33c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ae33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae340: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE340u;
            // 0x2ae344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE348u;
}
